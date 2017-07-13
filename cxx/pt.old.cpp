#define	true // to Author	:;	welcome to archibate@github.com;
	true // to Compile	:;	g++ -O3 -ffast-math -fopenmp -lm pt.cpp -o ./pt || exit;
	true // to Run		:;	time ./pt && display image.ppm; exit;
	true // to Debug	:;	g++ -ggdb -gstabs+ -lm pt.cpp -o ./pt && exec gdb pt;
#undef	true // to Myself	:;	thank you for reading my code!
#include <math.h>	// - pt.cpp  (math is over head)
#include <stdio.h>	//   A Simple Ray Tracer
#include <stdlib.h>	//   Almost a copy from smallpt.cpp
struct Vec {		//   Well done operator overriding..!
	double x, y, z;	//   position,  also the color (r,g,b)
	Vec() : Vec(0,0,0) {}
	Vec(double x, double y, double z) : x(x),y(y),z(z) {}
	Vec(const Vec &b) : Vec(b.x,b.y,b.z) {/*printf("Vec(%0.3f,%0.3f,%0.3f) copy\n",x,y,z);*/}
#define _O1(op) Vec operator op() { return Vec(op x, op y, op z); }
#define _O2(op) Vec operator op(const Vec &b) const { return Vec(x op b.x, y op b.y, z op b.z); }
#define _OS(op) Vec operator op(double b) const { return Vec(x op b, y op b, z op b); }
#define _W2(op) Vec &operator op(const Vec &b) { x op b.x, y op b.y, z op b.z; return *this; }
#define _WS(op) Vec &operator op(double b) { x op b, y op b, z op b; return *this; }
#define _A2(op,nd) bool operator op(const Vec &b) const { return (x op b.x)nd(y op b.y)nd(z op b.z); }
	_O2(+) _O2(-) _O2(*) _OS(*) _OS(/)
	_W2(+=) _W2(-=) _W2(*=) _WS(*=) _WS(/=)
	_A2(==, &&) _A2(!=, ||) _O1(+) _O1(-)
	double sqrLen() const { return x*x+y*y+z*z; };
	double operator*() const { return sqrt(x*x+y*y+z*z); };
	Vec operator~() const { return *this/(**this); };
	double operator%(const Vec &b) const { return x*b.x+y*b.y+z*b.z; }
	Vec operator^(const Vec &b) const { return Vec(y*b.z-z*b.y, z*b.x-x*b.z, x*b.y-y*b.x); }
	Vec &operator^=(const Vec &b) { return *this=Vec(y*b.z-z*b.y, z*b.x-x*b.z, x*b.y-y*b.x); }
	double dot(const Vec &b) const { return *this%b; }
	Vec cross(const Vec &b) const { return *this^b; }
	double len() const { return **this; }
	Vec norm() const { return ~*this; }
	Vec trad(Vec a, Vec nx=Vec(), Vec ny=Vec()) const
	{
		Vec n(*this);
		if (nx == Vec()) nx = Vec(n.x,-n.y,n.z);
		if (ny == Vec()) ny = n^nx;
		n*=a.z;
		n+=nx*a.x;
		n+=ny*a.y;
		return n;
	}
#define XYZ(v) (v).x, (v).y, (v).z
#define CLAMP(x) ((x)<0?0:(x)>1?1:(x))
#define COLOR(x) ((unsigned char)(pow(CLAMP(x),1/2.2)*255+.5))
	struct Rgb{unsigned char r,g,b;};
	Rgb toRgb()const{Rgb rgb={COLOR(x),COLOR(y),COLOR(z)};return(rgb);}
	Rgb toBgr()const{Rgb bgr={COLOR(z),COLOR(y),COLOR(x)};return(bgr);}
};typedef Vec Col;
struct Ray {Vec o,d;Ray(Vec o,Vec d):o(o),d(d){}};
struct Sphere {
	double rad;       // radius
	Vec p;            // position
	Col e;            // emission
	Col spec;         // specular
	Col diff;         // diffuse
	Sphere(double rad_, Vec p_, Col e_, Col spec_, Col diff_):
		rad(rad_), p(p_), e(e_), spec(spec_), diff(diff_) {}
	double intersect(const Ray &r) const { // returns distance, 0 if nohit
		Vec op = p-r.o; // Solve t^2*d.d + 2*t*(o-p).d + (o-p).(o-p)-R^2 = 0
		double t, eps=1e-4, b=op.dot(r.d), det=b*b-op.dot(op)+rad*rad;
		if (det<0) return 0; else det=sqrt(det);
		return (t=b-det)>eps ? t : ((t=b+det)>eps ? t : 0);
	}
};
Sphere scene[] = {//Scene: radius, position, emission, specular, diffuse 
	Sphere(1e5, Vec( 1e5+50,40.8,-81.6), Col(.75,.25,.25),Col(1,1,1)*.2,Col()),//Left 
	//Sphere(1e5, Vec(-1e5-50,40.8,-81.6), Col(.25,.25,.75),Col(1,1,1)*.2,Col()),//Rght 
	Sphere(1e5, Vec(-1e5-50,40.8,-81.6), Col(/*.25,.25,.75*/),Col(1,1,1)*.2,Col(1,1,1)*.5),//Rght 
	Sphere(16.5,Vec( 27,16.5,-77),Col(), Col(1,1,1)*.0, Col(1,1,1)*.5),//Ball 
	Sphere(4.8 ,Vec(-27, 4.8,-77),Col(), Col(1,1,1)*.0, Col(1,1,1)*.5),//Ball 
	  /*Sphere(10,  Vec(-8,-35,-47),  Col(0,.1,.1),Col(1,1,1)*.9, Col()),//Mirr 
	  //Sphere(16.5,Vec(0,16,-67),    Col(.5,0,0), Col(1,1,1)*.6, Col()),//Mirr 
	  Sphere(16.5,Vec(0,16,-67),    Col(0,0,0),  Col(1,1,1)*.0, Col(1,1,1)*.6),//Diff 
	  Sphere(16.5,Vec(27,-30.6,-47),Col(0,.5,.5),Col(1,1,1)*.4, Col()),//Mirr 
	  Sphere(16.5,Vec(27, 16.5,-47),Col(1,1,.9), Col(1,1,1)*.0, Col()),//Mirr 
	  //Sphere(600, Vec(50,681.6-.27,81.6),Col(12,12,12),  Col(), Col(), Col()),//Lite */
};

bool intersect(const Ray &r, double &t, int &id)
{
	for (int i=id; i < sizeof(scene)/sizeof(scene[0]); i++) {
		double d = scene[i].intersect(r);
		if (d!=0&&d<t) t=d,id=i;
	}

	return t < INFINITY;
}

double drand();
bool intersect(const Ray &r, double &t, int &id);
Col radiance(const Ray &r, int maxRefl);
Col diffuse(const Ray &r, Vec x, Vec n, int samps, int maxRefl);

Col radiance(const Ray &r, int maxRefl)
{
	double t=INFINITY;
	int id=0;
	if (!intersect(r, t, id)) return Col();
	const Sphere &s = scene[id];
	Vec x(r.o+r.d*t);
	Vec n(~(x-s.p));
	double dn(n%r.d);
	Vec nl(dn<0?n:-n);
	Col cl = s.e*-dn;
	if (s.spec != Col() && maxRefl > 0) {
		Ray rr(x, ~(r.d-(n*2)*dn));
		cl += radiance(rr, maxRefl-1)*s.spec;
	}
	if (s.diff != Col() && --maxRefl > 0) {
		cl -= diffuse(r,x,n, 300, maxRefl-1)*dn*s.diff;
	}
	return cl;
}

double drand()
{ return double(2 * rand()) / RAND_MAX - 1; }

double tanrand()
{ return tan(M_PI_2*drand()); }

double secrand()
{ return 1/sin(M_PI_2*drand()); }

double asinrand()
{ return asin(drand()); }

Col diffuSample(unsigned short Xi[])
{
	double a=M_2_PI*erand48(Xi), r=erand48(Xi), rs=sqrt(r); 
	Vec d = ~(u*cos(a)*rs + v*sin(a)*rs + w*sqrt(1-r)); 
}

Col diffuse(const Ray &r, Vec x, Vec n, int samps, int maxRefl)
{
	Col cld;
	for (int i=0;i<samps;i++) {
		/*double ax(drand()), ay(drand()), az(drand());
		Vec a(cos(ay)+sin(az),cos(az)+sin(ax),cos(ax)+sin(ay));*/
		double fi(drand()*M_PI), th(drand()*M_PI_2);
		Vec a(sin(th)*cos(fi),sin(th)*sin(fi),cos(th));
		Ray rd(x, n.trad(a, ~n^r.d));
		cld += radiance(rd, maxRefl);
	}

	return cld/samps;
}

void fisheye(double &x, double &y, double R)
{
	double r(sqrt(x*x+y*y));
	double d(R/(R+r));
	x *= d, y *= d;
}

Col *fisheye(Col *pixels, int &w, int &h, double R=1.414)
{
	if (R>=1e5) return pixels;
	int nw=w,nh=h; Col *newPixels= new Col[nw*nh];
	double scal=(R+1)/R,pnx=0,pnya[nw]={0};
	for (int y=0;y<h;y++){const double sy=(double(h-1-y*2)/(h-1));
		fprintf(stderr,"\rI'm Fishing %5.2f%%...",100.*y/(h-1));
		for (int x=0;x<w;x++){const double sx=(double(x*2+1-w)/(w-1));{
			double fx(sx),fy(sy);fisheye(fx,fy,R);fx*=scal,fy*=scal;int
				nx((fx*(nw-1)+nw-1)/2),ny((-fy*(nh-1)+nh-1)/2);
			for(int inx=nx;inx>pnx;inx--){int pny=pnya[nx];double
				yfacdif=1/double(ny-pny-1);double yfac=1;for(int
				iny=ny;iny>pny;iny--,yfac-=yfacdif){newPixels[inx+
			iny*nw]=pixels[x+y*w]*yfac+newPixels[int(pnx+pny*nw)]*(1-yfac);
			pnya[inx]=ny;}}pnx=nx;}}pnx=0;}w=nw,h=nh;return(newPixels);
}

int main(int argc, char *argv[])
{
	/*Col res(radiance(Ray(Vec(0,0,0),~Vec(0,0,-1))));
	return(!printf("\nradiance=(%0.2f, %0.2f, %0.2f)\n",XYZ(res)));*/

	/*f(2)=1.5;2;
	f(1)=3.5;
	f(0.5)=6.5;*/
#define DFLARG(i,v) (argc>i?argv[i]:(v))
	const char *savefname = DFLARG(1, "image.ppm");
	int w=100,h=w;
	Col *pixels = new Col[w*h];
	const double fow=1.0, fshr=(fow>0.7?2/(fow-.5):fow>0.3?3/(fow-.2):1e5);
#pragma omp parallel for schedule(dynamic, 1)
	for (int y=0;y<h;y++){const double sy=(double(h-1-y*2)/(h-1))*fow;
		fprintf(stderr,"\rRendering %5.2f%%...",100.*y/(h-1));
		for (int x=0;x<w;x++){const double sx=(double(x*2+1-w)/(w-1))*fow;{
			Ray sr(Vec(0,0,0), ~Vec(sx,sy,-1));
			//Ray sr(Vec(sx*edw,sy*edw,edw),~Vec(sx,sy,-1));
			//printf("(%f, %f, %f)\n", XYZ(sr.o));
			Col r = radiance(sr,3);
			//if(r!=Col())printf("at (%0.3f, %0.3f) = (%0.2f, %0.2f, %0.2f)\n",sx,sy,XYZ(r));
			pixels[y*w+x]=r;}}}
	fprintf(stderr,"done\nNow, processing result to fisheye view\n");
	Col *newPixels = fisheye(pixels,w,h,fshr);if(newPixels!=pixels)delete[]pixels;
	fprintf(stderr,"done\nNow, saving result to %s\n", savefname);
	FILE *fout = fopen(savefname, "w+");
	fprintf(fout, "P6 # render result by pt.cpp, powered by archibate@github.com\n%d %d\n255\n", w, h);
	for(int i=0;i<w*h;i++){Col::Rgb rgb(newPixels[i].toRgb());fwrite(&rgb,3,1,fout);}
	if(newPixels!=pixels)delete[]newPixels;return(0);
}
