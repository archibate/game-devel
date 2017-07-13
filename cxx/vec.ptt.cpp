#define	true // to Author	:;	welcome to archibate@github.com;
	true // to Compile	:;	g++ -O3 -ffast-math -fopenmp -lm pt.cpp -o ./pt || exit;
	true // to Run		:;	time ./pt && display image.ppm; exit;
	true // to Debug	:;	g++ -ggdb -gstabs+ -lm pt.cpp -o ./pt && exec gdb pt;
#undef	true // to Myself	:;	thank you for reading my code!
#include <math.h>	// - pt.cpp  (math is over head)
#include <stdio.h>	//   A Simple Ray Tracer
#include <stdlib.h>	//   Almost a copy from smallpt.cpp
#include <iostream>
#include <limits>
using namespace std;
template <typename ScaT>
struct VecT {		//   Well done operator overriding..!
	ScaT x, y, z;	//   position,  also the color (r,g,b)
	inline VecT() : VecT(0,0,0) {}
	inline VecT(ScaT x, ScaT y, ScaT z) : x(x),y(y),z(z) {}
	inline VecT(const VecT &b) : VecT(b.x,b.y,b.z) {}
#define _O1(op) inline VecT operator op() { return VecT(op x, op y, op z); }
#define _O2(op) inline VecT operator op(const VecT &b) const { return VecT(x op b.x, y op b.y, z op b.z); }
#define _W2(op) inline VecT &operator op(const VecT &b) { x op b.x, y op b.y, z op b.z; return *this; }
#define _OS(op) inline VecT operator op(ScaT b) const { return VecT(x op b, y op b, z op b); }
#define _WS(op) inline VecT &operator op(ScaT b) { x op b, y op b, z op b; return *this; }
#define _SO(op) inline friend VecT operator op(ScaT b, const VecT &a) { return VecT(b op a.x, b op a.y, b op a.z); }
#define _A2(op,nd) inline bool operator op(const VecT &b) const { return (x op b.x)nd(y op b.y)nd(z op b.z); }
	_O2(+) _O2(-) _O2(*) _OS(*) _OS(/) _SO(*) _SO(/)
	_W2(+=) _W2(-=) _W2(*=) _WS(*=) _WS(/=)
	_A2(==, &&) _A2(!=, ||) _O1(+) _O1(-)
	inline VecT operator~() { return norm(); }
	inline ScaT operator*(const VecT &b) { return dot(b); }
	inline ScaT sqrLen() const { return x*x+y*y+z*z; }
	inline ScaT len() const { return sqrt(x*x+y*y+z*z); }
	inline VecT norm() const { return *this/len(); }
	inline VecT &norm_() { return *this/=len(); }
	inline ScaT dot(const VecT &b) const { return x*b.x+y*b.y+z*b.z; }
	inline VecT cross(const VecT &b) const { return VecT(y*b.z-z*b.y, z*b.x-x*b.z, x*b.y-y*b.x); }
	inline VecT shadow(const VecT &n) { return n*dot(n); }
	VecT trad(VecT a, VecT nx, VecT ny=VecT()) const { VecT n(*this);
		if (ny == VecT()) ny = n.cross(nx); n*=a.z; n+=nx*a.x; n+=ny*a.y; return n; }
	inline friend ScaT sqrLen(const VecT &a) { return a.sqrLen(); }
	inline friend ScaT len(const VecT &a) { return a.len(); }
	inline friend VecT norm(const VecT &a) { return a.norm(); }
	inline friend ScaT dot(const VecT &a, const VecT &b) { return a.dot(b); }
	inline friend VecT cross(const VecT &a, const VecT &b) { return a.cross(b); }
	inline friend VecT shadow(const VecT &n, const VecT &v) { return n*n.dot(v); }
	inline friend ostream &operator<<(ostream &out, const VecT &v) {
		return out << "(" << v.x << ", " << v.y << ", " << v.z << ")"; }
};typedef VecT<double> Vec;
struct Ray {
	Vec o, d;
	Ray(Vec o=Vec(), Vec d=Vec()) : o(o), d(d) {}
};
class Camera {
	Vec cx, cy, cz;
};
#define XYZ(v) (v).x, (v).y, (v).z
#define CLAMP(x) ((x)<0?0:(x)>1?1:(x))
#define COLOR(x) ((unsigned char)(pow(CLAMP(x),1/2.2)*255+.5))
template<class VXT, typename IdxT>
class VXAlctrT {
	IdxT nextTemp;
	VXT *tempList;
public:
	VXAlctrT() : tempList(new VXT[numeric_limits<IdxT>::max()+1]) {}
	inline VXT *alcTemp() { return tempList + nextTemp++; }
	inline void freTemp(const VXT &v) { ; }
};
struct VecX : public Vec {
	static VXAlctrT<VecX, unsigned char> alctr;
#define _XICV inline const VecX &
#define _XFICV friend inline const VecX &
#define _XRSLT(...) { VecX *r = alctr.alcTemp(); __VA_ARGS__; return *r; }
#define _XO2(op) _XFICV operator op(const VecX &a, const Vec &b)_XRSLT(r->x=a.x op b.x;r->y=a.y op b.y;r->z=a.z op b.z)
#define _XOS(op) _XFICV operator op(const VecX &a, double b)_XRSLT(r->x=a.x op b;r->y=a.y op b;r->z=a.z op b)
#define _XSO(op) _XFICV operator op(double b, const VecX &a)_XRSLT(r->x=b op a.x;r->y=b op a.y;r->z=b op a.z)
	_XO2(+) _XO2(-) _XO2(*) _XOS(*) _XOS(/) _XSO(*) _XSO(/)
	_XICV norm() const {return *this/len();}
	_XICV cross(const Vec &b) const _XRSLT(r->x=y*b.z-z*b.y;r->y=z*b.x-x*b.z;r->z=x*b.y-y*b.x)
	_XFICV norm(const VecX &a) {return a/a.len();}
	_XFICV cross(const VecX &a, const VecX &b)_XRSLT(r->x=a.y*b.z-a.z*b.y;r->y=a.z*b.x-a.x*b.z;r->z=a.x*b.y-a.y*b.x)
};
#define _AM(am...) __attribute__((vector_size(am)))
/*template <typename T>
class MMXT {
	T _AM(8) v;
public:
	inline MMXT(T *pa) : v(((T _AM(8) *) pa)[0]) {}
	inline MMXT(const T _AM(8) &v) : v(v) {}
	inline MMXT &operator+=(MMXT b) { v+=b; return *this; }
	inline MMXT &operator-=(MMXT b) { v-=b; return *this; }
	inline MMXT &operator*=(MMXT b) { v*=b; return *this; }
};
int main(void)
{
	MMXT<short> m1((short *) {8,  34, 1, -1});
	MMXT<short> m2((short *) {-6,-45, 1, -2});
	MMXT<short> msum = m1 + m2;
	printf("vector add: %llx\n", msum.tol());
}*/
// v'=(v-(v.n)n)cos$+(n%v)sin$+(v.n)n
// i=[1 0 0]  =>  i'=[nx^2(1-cos$)+cos$ nx*ny(1-cos$)+nx*sin$ nx*nz(1-cos$)-ny*sin$]
