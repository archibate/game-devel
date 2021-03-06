// Listing 1. Perspective Texture Mapper
#include<windows.h>
#include<math.h>

struct POINT3D {
	float X, Y, Z;
	float U, V;
};

void TextureMapTriangle( BITMAPINFO const *pDestInfo,
		BYTE *pDestBits, POINT3D const *pVertices,
		BITMAPINFO const *pTextureInfo,
		BYTE *pTextureBits );

/******** structures, inlines, and function declarations **********/

struct gradients {
	gradients( POINT3D const *pVertices );
	float aOneOverZ[3];				// 1/z for each vertex
	float aUOverZ[3];				// u/z for each vertex
	float aVOverZ[3];				// v/z for each vertex
	float dOneOverZdX, dOneOverZdY;	// d(1/z)/dX, d(1/z)/dY
	float dUOverZdX, dUOverZdY;		// d(u/z)/dX, d(u/z)/dY
	float dVOverZdX, dVOverZdY;		// d(v/z)/dX, d(v/z)/dY
};

struct edge {
	edge(gradients const &Gradients,
		POINT3D const *pVertices,
		int Top, int Bottom );
	inline int Step( void );

	float X, XStep;					// fractional x and dX/dY
	int Y, Height;					// current y and vert count
	float OneOverZ, OneOverZStep;		// 1/z and step
	float UOverZ, UOverZStep;			// u/z and step
	float VOverZ, VOverZStep;			// v/z and step
};

inline int edge::Step( void ) {
	X += XStep; Y++; Height�;
	UOverZ += UOverZStep; VOverZ += VOverZStep;
	OneOverZ += OneOverZStep;
	return Height;
}

void DrawScanLine( BITMAPINFO const *pDestInfo,
	BYTE *pDestBits, gradients const &Gradients,
	edge *pLeft, edge *pRight,
	BITMAPINFO const *pTextureInfo, BYTE *pTextureBits );

/******** TextureMapTriangle **********/

void TextureMapTriangle( BITMAPINFO const *pDestInfo,
		BYTE *pDestBits, POINT3D const *pVertices,
		BITMAPINFO const *pTextureInfo,
		BYTE *pTextureBits )
{
	int Top, Middle, Bottom;
	int MiddleCompare, BottomCompare;
	float Y0 = pVertices[0].Y;
	float Y1 = pVertices[1].Y;
	float Y2 = pVertices[2].Y;

	// sort vertices in y
	if(Y0 < Y1) {
		if(Y2 < Y0) {
			Top = 2; Middle = 0; Bottom = 1;
			MiddleCompare = 0; BottomCompare = 1;
		} else {
			Top = 0;
			if(Y1 < Y2) {
				Middle = 1; Bottom = 2;
				MiddleCompare = 1; BottomCompare = 2;
			} else {
				Middle = 2; Bottom = 1;
				MiddleCompare = 2; BottomCompare = 1;
			}
		}
	} else {
		if(Y2 < Y1) {
			Top = 2; Middle = 1; Bottom = 0;
			MiddleCompare = 1; BottomCompare = 0;
		} else {
			Top = 1;
			if(Y0 < Y2) {
				Middle = 0; Bottom = 2;
				MiddleCompare = 3; BottomCompare = 2;
			} else {
				Middle = 2; Bottom = 0;
				MiddleCompare = 2; BottomCompare = 3;
			}
		}
	}

	gradients Gradients(pVertices);
	edge TopToBottom(Gradients,pVertices,Top,Bottom);
	edge TopToMiddle(Gradients,pVertices,Top,Middle);
	edge MiddleToBottom(Gradients,pVertices,Middle,Bottom);
	edge *pLeft, *pRight;
	int MiddleIsLeft;

	// the triangle is clockwise, so
	// if bottom > middle then middle is right
	if(BottomCompare > MiddleCompare) {
		MiddleIsLeft = 0;
		pLeft = &TopToBottom; pRight = &TopToMiddle;
	} else {
		MiddleIsLeft = 1;
		pLeft = &TopToMiddle; pRight = &TopToBottom;
	}

	int Height = TopToMiddle.Height;

	while(Height�) {
		DrawScanLine(pDestInfo,pDestBits,Gradients,
			pLeft,pRight,pTextureInfo,pTextureBits);
		TopToMiddle.Step(); TopToBottom.Step();
	}

	Height = MiddleToBottom.Height;

	if(MiddleIsLeft) {
		pLeft = &MiddleToBottom; pRight = &TopToBottom;
	} else {
		pLeft = &TopToBottom; pRight = &MiddleToBottom;
	}
	
	while(Height�) {
		DrawScanLine(pDestInfo,pDestBits,Gradients,
			pLeft,pRight,pTextureInfo,pTextureBits);
		MiddleToBottom.Step(); TopToBottom.Step();
	}
}

/********** gradients constructor **********/

gradients::gradients( POINT3D const *pVertices )
{
	int Counter;
	
	float OneOverdX = 1 /(((pVertices[1].X - pVertices[2].X) *
			(pVertices[0].Y - pVertices[2].Y)) -
			((pVertices[0].X - pVertices[2].X) *
			(pVertices[1].Y - pVertices[2].Y)));

	float OneOverdY = -OneOverdX;

	for(Counter = 0;Counter < 3;Counter++) {
		float const OneOverZ = 1/pVertices[Counter].Z;
		aOneOverZ[Counter] = OneOverZ;
		aUOverZ[Counter] = pVertices[Counter].U * OneOverZ;
		aVOverZ[Counter] = pVertices[Counter].V * OneOverZ;
	}

	dOneOverZdX = OneOverdX * (((aOneOverZ[1] - aOneOverZ[2]) *
			(pVertices[0].Y - pVertices[2].Y)) -
			((aOneOverZ[0] - aOneOverZ[2]) *
			(pVertices[1].Y - pVertices[2].Y)));
	dOneOverZdY = OneOverdY * (((aOneOverZ[1] - aOneOverZ[2]) *
			(pVertices[0].X - pVertices[2].X)) -
			((aOneOverZ[0] - aOneOverZ[2]) *
			(pVertices[1].X - pVertices[2].X)));

	dUOverZdX = OneOverdX * (((aUOverZ[1] - aUOverZ[2]) *
			(pVertices[0].Y - pVertices[2].Y)) -
			((aUOverZ[0] - aUOverZ[2]) *
			(pVertices[1].Y - pVertices[2].Y)));
	dUOverZdY = OneOverdY * (((aUOverZ[1] - aUOverZ[2]) *
			(pVertices[0].X - pVertices[2].X)) -
			((aUOverZ[0] - aUOverZ[2]) *
			(pVertices[1].X - pVertices[2].X)));

	dVOverZdX = OneOverdX * (((aVOverZ[1] - aVOverZ[2]) *
			(pVertices[0].Y - pVertices[2].Y)) -
			((aVOverZ[0] - aVOverZ[2]) *
			(pVertices[1].Y - pVertices[2].Y)));
	dVOverZdY = OneOverdY * (((aVOverZ[1] - aVOverZ[2]) *
			(pVertices[0].X - pVertices[2].X)) -
			((aVOverZ[0] - aVOverZ[2]) *
			(pVertices[1].X - pVertices[2].X)));
}

/********** edge constructor ***********/

edge::edge( gradients const &Gradients,
		POINT3D const *pVertices, int Top, int Bottom )
{
	Y = ceil(pVertices[Top].Y);
	int YEnd = ceil(pVertices[Bottom].Y);
	Height = YEnd - Y;

	float YPrestep = Y - pVertices[Top].Y;
	
	float RealHeight = pVertices[Bottom].Y - pVertices[Top].Y;
	float RealWidth = pVertices[Bottom].X - pVertices[Top].X;

	X = ((RealWidth * YPrestep)/RealHeight) + pVertices[Top].X;
	XStep = RealWidth/RealHeight;
	float XPrestep = X - pVertices[Top].X;

	OneOverZ = Gradients.aOneOverZ[Top] +
		YPrestep * Gradients.dOneOverZdY +
		XPrestep * Gradients.dOneOverZdX;
	OneOverZStep = XStep *
		Gradients.dOneOverZdX + Gradients.dOneOverZdY;

	UOverZ = Gradients.aUOverZ[Top] +
		YPrestep * Gradients.dUOverZdY +
		XPrestep * Gradients.dUOverZdX;
	UOverZStep = XStep *
		Gradients.dUOverZdX + Gradients.dUOverZdY;

	VOverZ = Gradients.aVOverZ[Top] +
		YPrestep * Gradients.dVOverZdY +
		XPrestep * Gradients.dVOverZdX;
	VOverZStep = XStep *
		Gradients.dVOverZdX + Gradients.dVOverZdY;
}

/********** DrawScanLine ************/

void DrawScanLine( BITMAPINFO const *pDestInfo,
		BYTE *pDestBits, gradients const &Gradients,
		edge *pLeft, edge *pRight,
		BITMAPINFO const *pTextureInfo,
		BYTE *pTextureBits )
{
	// we assume dest and texture are top-down

	int DestWidthBytes =
		(pDestInfo->bmiHeader.biWidth + 3) & ~3;
	int TextureWidthBytes =
		(pTextureInfo->bmiHeader.biWidth + 3) & ~3;

	int XStart = ceil(pLeft->X);
	float XPrestep = XStart - pLeft->X;

	pDestBits += pLeft->Y * DestWidthBytes + XStart;

	int Width = ceil(pRight->X) - XStart;

	float OneOverZ = pLeft->OneOverZ +
			XPrestep * Gradients.dOneOverZdX;
	float UOverZ = pLeft->UOverZ +
			XPrestep * Gradients.dUOverZdX;
	float VOverZ = pLeft->VOverZ +
			XPrestep * Gradients.dVOverZdX;

	if(Width > 0) {
		while(Width�) {
			float Z = 1/OneOverZ;
			int U = UOverZ * Z;
			int V = VOverZ * Z;

			*(pDestBits++) = *(pTextureBits + U +
				(V * TextureWidthBytes));
	
			OneOverZ += Gradients.dOneOverZdX;
			UOverZ += Gradients.dUOverZdX;
			VOverZ += Gradients.dVOverZdX;
		}
	}
}

