#define	true // to Author	:;	welcome to archibate@github.com;
	true // to Compile	:;	g++ -O3 -ffast-math -fopenmp -lm vec.cpp -o ./vec || exit;
	true // to Run		:;	time ./vec && display image.ppm; exit;
	true // to Debug	:;	g++ -ggdb -gstabs+ -lm vec.cpp -o ./vec && exec gdb vec;
#undef	true // to Myself	:;	thank you for reading my code!
#include <math.h>	// - vec.cpp  (math is over head)
#include <stdio.h>	//   A Simple Ray Tracer
#include <stdlib.h>	//   Almost a copy from smallpt.cpp
#include <iostream>
#include <limits>
#include <vector>
using namespace std;
#define INF 1e5
#define EPS 1e-4
#define XYZ(v) (v).x, (v).y, (v).z
#define CLAMP(x) ({typeof(x)_x_=(x);_x_<0?0:_x_>1?1:_x_;})
#define COLOR(x) ((uint8_t)(pow(CLAMP(x),1/2.2)*255))
template<typename ScaT>
struct Vec {		//   Well done operator overriding..!
	ScaT x, y, z;	//   position,  also the color (r,g,b)
	inline Vec(): Vec(0,0,0) {}
	inline Vec(ScaT x, ScaT y, ScaT z): x(x),y(y),z(z) {}
	inline Vec(const Vec &b): Vec(b.x,b.y,b.z) {}
#define _O1(op) inline Vec operator op() { return Vec(op x, op y, op z); }
#define _O2(op) inline Vec operator op(const Vec &b) const { return Vec(x op b.x, y op b.y, z op b.z); }
#define _W2(op) inline Vec &operator op(const Vec &b) { x op b.x, y op b.y, z op b.z; return *this; }
#define _OS(op) inline Vec operator op(ScaT b) const { return Vec(x op b, y op b, z op b); }
#define _WS(op) inline Vec &operator op(ScaT b) { x op b, y op b, z op b; return *this; }
#define _SO(op) inline friend Vec operator op(ScaT b, const Vec &a) { return Vec(b op a.x, b op a.y, b op a.z); }
#define _A2(op,nd) inline bool operator op(const Vec &b) const { return (x op b.x)nd(y op b.y)nd(z op b.z); }
	_O2(+) _O2(-) _O2(*) _OS(*) _OS(/) _SO(*) _SO(/)
	_W2(+=) _W2(-=) _W2(*=) _WS(*=) _WS(/=)
	_A2(==, &&) _A2(!=, ||) _O1(+) _O1(-)
	inline Vec operator~() { return norm(); }
	inline ScaT operator*(const Vec &b) { return dot(b); }
	inline ScaT sqrLen() const { return x*x+y*y+z*z; }
	inline ScaT len() const { return sqrt(x*x+y*y+z*z); }
	inline Vec norm() const { return *this/len(); }
	inline Vec &norm_() { return *this/=len(); }
	inline ScaT dot(const Vec &b) const { return x*b.x+y*b.y+z*b.z; }
	inline Vec cross(const Vec &b) const { return Vec(y*b.z-z*b.y, z*b.x-x*b.z, x*b.y-y*b.x); }
	inline Vec shadow(const Vec &n) { return n*dot(n); }
	Vec trad(Vec a, Vec nx, Vec ny=Vec()) const { Vec n(*this);
		if (ny == Vec()) ny = n.cross(nx); n*=a.z; n+=nx*a.x; n+=ny*a.y; return n; }
	inline friend ScaT sqrLen(const Vec &a) { return a.sqrLen(); }
	inline friend ScaT len(const Vec &a) { return a.len(); }
	inline friend Vec norm(const Vec &a) { return a.norm(); }
	inline friend ScaT dot(const Vec &a, const Vec &b) { return a.dot(b); }
	inline friend Vec cross(const Vec &a, const Vec &b) { return a.cross(b); }
	inline friend Vec shadow(const Vec &n, const Vec &v) { return n*n.dot(v); }
	inline friend ostream &operator<<(ostream &out, const Vec &v) {
		return out << "(" << v.x << ", " << v.y << ", " << v.z << ")"; }
};
template<typename ScaT=double, ScaT maxT=360>
struct Ang {
private:
	ScaT a;
public:
	static ScaT wrap(ScaT x) { return x-maxT*((x+maxT/2)/maxT); }
	inline Ang(ScaT a): a(a) {}
	inline Ang(const Ang &a): a(a.a) {}
#define _AO1(op) inline Ang operator op() const { return Ang(wrap(op a)); }
#define _AW1(op) inline Ang operator op(Ang b) { a=wrap(a op b.a); return *this; }
#define _AO2(op) inline Ang operator op(Ang b) const { return Ang(wrap(a op b.a)); }
#define _AW2(op) inline Ang operator op(Ang b) { a=wrap(a op b.a); return *this; }
	_AO1(+)
	_AO1(-)
	_AO2(+)
	_AO2(-)
	_AW2(+=)
	_AW2(-=)
	_AW1(=)
};
template<typename ScaT=double, ScaT maxT=360>
struct Eular {
	Ang<ScaT, maxT> h,b;	// heading, bank
	Ang<ScaT, maxT> p;	// pitch
	Eular(ScaT h, ScaT p, ScaT b) : h(h), p(p), b(b) {wrap();}
	inline void wrap() { if (p>=maxT/4) {h=-h;} }
};
#if 0
struct Ray {
	Vec o, d;
	Ray(Vec o, Vec d): o(o), d(d) {}
};
struct Sphere {
	double rad;       // radius
	Vec p;            // position
	Sphere(double rad_, Vec p_): rad(rad_), p(p_) {}
	double intersect(const Ray &r) const { // returns distance, INF if nohit
		Vec op(p-r.o);			// O-C
		double b(op*r.d);		// D.(O-C)		b/2
		double c(op*op-rad*rad);	// (O-C).(O-C)-r^2	c
		double det(b*b-c);		// b^2-4c		det/4
		if (det<0) return INF; else det=sqrt(det);
		double t;
		t=b-det; if (t>EPS) return t;
		t=b+det; if (t>EPS) return t;
		return INF;
	}
};
class Camera {
public:
	Vec c, cx, cy, cz;
	Camera(Vec c, Vec cx, Vec cy, Vec cz): c(c), cx(cx), cy(cy), cz(cz) {}
	Ray genRay(double sx, double sy, double sz=0) const { return Ray(c,cx*sx+cy*sy+cz*sz); }
};
class Scene {
	vector<const Sphere *> spheres;
public:
	Scene(const Sphere &sph) { addSphere(&sph); }
	void addSphere(const Sphere *sph) { spheres.push_back(sph); }
	const Sphere *intersect(const Ray &r, double &t) const { const Sphere *s=nullptr;
		for (vector<const Sphere *>::const_iterator it=spheres.begin(); it!=spheres.end(); it++)
		{ double d=(*it)->intersect(r); if (d>EPS&&d<t) t=d,s=*it; } return s; }
};
class Engine {
	Scene scene;
	Camera cam;
public:
	Engine(Camera cam = Camera(Vec(0,0,0),Vec(1,0,0),Vec(0,1,0),Vec(0,0,1)),
			Scene scene=Scene(Sphere(16,Vec(0,0,30)))):
		cam(cam), scene(scene) {}
	Vec *scanSaveAll(int w, int h) const { Vec*pc=new Vec[w*h];
#pragma omp parallel for schedule(dynamic, 1)
		for (int y=0;y<h;y++){const double ay(double(h-1-y*2)/(h-1));
			fprintf(stderr,"\rRendering %5.2f%%...",100.*y/(h-1));
			for (int x=0;x<w;x++){const double ax(double(x*2+1-w)/(w-1));{
				pc[x+y*w]=scanAt(ax,ay,1);}}}return(pc);}
protected:
	Vec scanAt(double sx, double sy, double sz) const {
		return trace(cam.genRay(sx,sy,sz)); }
	Vec trace(const Ray &r) const {
		double t = 0;
		const Sphere &s = *scene.intersect(r, t);
		if (t<=EPS) return Vec();
		Vec x(r.o+r.d*t), n(~(x-s.p));
		Vec d(cam.c-x);
		return Vec(0,0,d.len()/30);
	}
};

int(main(int(argc),char*argv[])){int(w)(400),h(400);Engine*eng=new Engine();FILE*fout=fopen("image.ppm","w");fprintf(fout,"P6\n%d\x20%d\n255\n",w,h);Vec*pc=eng->scanSaveAll(w,h);fprintf(stderr,"done\nSaving\x20result...\n");for(int(i)=0;i<w*h;i++){struct{uint8_t(r),g,b;}rgb={COLOR(pc[i].x),COLOR(pc[i].y),COLOR(pc[i].z),};fwrite(&rgb,3,1,fout);}delete[]pc;delete(eng);}
#endif
