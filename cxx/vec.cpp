#define	true //!!AUTH:	archibate@github.com;
true 	true /*!!NOTE:	;Fc=`dirname $0`; mF=$Fc/.mf; echo -e M=$mF\\nS=$0 > $mF; sed -n '3,$p' $0 >> $mF; sed -i '/\*\*NO/q' $mF; exec make -f $mF -C $Fc $*;
pyb-designed : all
USE_OPT	:=2
USE_GTK	:=#gtk+-2.0
USE_OMP	:=1
USE_OPT	:=2
DEFINES	:=$(if $(USE_GTK), USE_GTK=$(USE_GTK))
CPPFLAGS:=$(DEFINES:%=-D%)
GTKFLAGS:=$(if $(USE_GTK), $(shell pkg-config --cflags --libs $(USE_GTK)))
CXXFLAGS:=$(if $(USE_OPT), -O$(USE_OPT) -ffast-math) $(if $(USE_OMP), -pthread -fopenmp) $(GTKFLAGS)
LDFLAGS	:=-lm $(if $(USE_OMP), -lpthread)

SOURCES	+=$S
OBJECTS	+=$(SOURCES:%.cpp=%.o)
TARGET	:=$(PWD)/$M.run

.PHONY : all clean dep undep

all : $(TARGET)

run : $(TARGET)
	$<

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean :
	rm -rf $(OBJECTS) $(TARGET)

dep : undep
	(for x in $(SOURCES); \
		do $(CXX) $(CXXFLAGS) $(CPPFLAGS) -E -M $$x; \
		done) >> $M

undep :
	sed -i '/depedancies/q' $M

.PHONY : **NOTE pyb-designed** */
#undef true

#include <math.h>	// - vec.cpp  (math is over head)
#include <stdio.h>	//   A Simple Game Vector Library
#include <stdlib.h>
#include <iostream>
#include <limits>
#include <vector>
#include <array>
using namespace std;
namespace math {
#define INF 1e5
#define EPS 1e-4
#define XYZ(v) (v).x, (v).y, (v).z
#define CLAMP(x) ({typeof(x)_x_=(x);_x_<0?0:_x_>1?1:_x_;})
#define COLOR(x) ((uint8_t)(pow(CLAMP(x),1/2.2)*255))
#define _2O1(op) inline Four operator op() { return Four(op x, op y); }
#define _2O2(op) inline Four operator op(const Four &b) const { return Four(x op b.x, y op b.y); }
#define _2W2(op) inline Four &operator op(const Four &b) { x op b.x, y op b.y; return *this; }
#define _2OS(op) inline Four operator op(ScaT b) const { return Four(x op b, y op b); }
#define _2WS(op) inline Four &operator op(ScaT b) { x op b, y op b; return *this; }
#define _2SO(op) inline friend Four operator op(ScaT b, const Four &a) { return Four(b op a.x, b op a.y); }
#define _2A2(op,nd) inline bool operator op(const Four &b) const { return (x op b.x)nd(y op b.y); }
template<typename ScaT=double>
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
	_O1(+) _O1(-) _O2(+) _O2(-) _O2(*) _OS(*) _OS(/) _SO(*) _SO(/)
	_W2(=) _W2(+=) _W2(-=) _W2(*=) _WS(*=) _WS(/=) _A2(==, &&) _A2(!=, ||)
	//inline Vec operator~() { return norm(); }
	inline ScaT operator*(const Vec &b) { return dot(b); }
	inline ScaT sqrLen() const { return sqrMag(); }
	inline ScaT len() const { return mag(); }
	inline ScaT sqrMag() const { return x*x+y*y+z*z; }
	inline ScaT mag() const { return sqrt(sqrMag()); }
	inline Vec norm() const { return *this/len(); }
	inline Vec &norm_() { return *this/=len(); }
	inline ScaT dot(const Vec &b) const { return x*b.x+y*b.y+z*b.z; }
	inline Vec cross(const Vec &b) const { return Vec(y*b.z-z*b.y, z*b.x-x*b.z, x*b.y-y*b.x); }
	inline Vec shadow(const Vec &n) { return n*dot(n); }
	Vec trad(Vec a, Vec nx, Vec ny=Vec()) const { Vec n(*this);
		if (ny == Vec()) ny = n.cross(nx); n*=a.z; n+=nx*a.x; n+=ny*a.y; return n; }
	inline friend ScaT sqrMag(const Vec &a) { return a.sqrMag(); }
	inline friend ScaT mag(const Vec &a) { return a.mag(); }
	inline friend ScaT sqrLen(const Vec &a) { return a.sqrLen(); }
	inline friend ScaT len(const Vec &a) { return a.len(); }
	inline friend Vec norm(const Vec &a) { return a.norm(); }
	inline friend ScaT dot(const Vec &a, const Vec &b) { return a.dot(b); }
	inline friend Vec cross(const Vec &a, const Vec &b) { return a.cross(b); }
	inline friend Vec shadow(const Vec &n, const Vec &v) { return n*n.dot(v); }
	inline ScaT&operator[](int i) { if (i==0) return x;
		else if (i==1) return y; else if (i==2) return z;
		else return *(ScaT*)NULL; }
	inline friend ostream &operator<<(ostream &out, const Vec &v) {
		return out << "(" << v.x << ", " << v.y << ", " << v.z << ")"; }
};
template<typename ScaT=double, ScaT maxT=360>
struct Ang {
private:
	ScaT a;
public:
	static inline ScaT wrap(ScaT x) {x+=maxT/2;x-=maxT*floor(x/maxT);x-=maxT/2;
		return(x);/*return(x-maxT*((x+maxT/2)/maxT));*/}
	inline Ang(ScaT a): a(wrap(a)) {}
	inline Ang(const Ang &a): a(a.a) {}
	Ang &do_wrap() { a = wrap(a); }
#define _AO1(op) inline Ang operator op() const { return Ang(op a); }
#define _AO2(op) inline Ang operator op(const Ang &b) const { return Ang(a op b.a); }
#define _AW2(op) inline Ang operator op(const Ang &b) { a op b.a; do_wrap(); return *this; }
	_AO1(+) _AO1(-) _AO2(+) _AO2(-) _AW2(=) _AW2(+=) _AW2(-=)
	inline Ang midden(const Ang &b) const { Ang r(*this+(b-*this));
		return r-*this>maxT/4?-r:r; }
};
template<typename ScaT=double, ScaT maxT=360>
struct Eular {
	typedef Ang<ScaT, maxT> Angle;
private:
	Angle h,b;	// heading & bank, in range [-180, 180)
	Angle p;	// pitch, in range [-90, 90]
public:
	Eular(ScaT h, ScaT p, ScaT b) : h(h), p(p), b(b) { do_wrap(); }
#define _EO1(op) inline Eular operator op() const { return Eular(op h, op p, op b); }
#define _EO1(op) inline Eular operator op() const { return Eular(op h, op p, op b); }
#define _EO2(op) inline Eular operator op(const Eular &e) const { return Eular(h op b.h, p op e.h, b op e.b).warp(); }
#define _EW2(op) inline Eular operator op(const Eular &e) const { return Eular(h op b.h, p op e.h, b op e.b).warp(); }
	_EO1(+) _EO1(-) _EO2(+) _EO2(-) _EW2(=) _EW2(+=) _EW2(-=)
protected:
	static inline ScaT wrap_angle(ScaT p, ScaT &h, ScaT &b) { if (p>=maxT/4) {p-=maxT/4;h=-h;}
		else if (p<=maxT/4) {p+=maxT/4;h=-h;} if (p==maxT/4||p==-maxT/4) b=0; return p; }
	inline Eular &do_wrap() { wrap_angle(p,h,b); return *this; }
};
#if 0
template<typename ScaT=double, ScaT maxT=360>
class Mat {
public:
	typedef Vec<ScaT> Vector;
	typedef Ang<ScaT,maxT> Angle;
	typedef array<ScaT,3> Lom;
	typedef array<Lom,4> Arm;
	Arm m;
	inline Mat(Arm m): m(m) {}
	inline Mat operator*(const Mat &m) {TODO!!
	}
	void apply_to(Vector *d, const Vector &v) const {
		{const Lom&p=m[0];d[0]=v[0]*p[0]+v[1]*p[1]+v[2]*p[2]+v[3]*p[3];}
		{const Lom&p=m[1];d[1]=v[0]*p[0]+v[1]*p[1]+v[2]*p[2]+v[3]*p[3];}
		{const Lom&p=m[2];d[2]=v[0]*p[0]+v[1]*p[1]+v[2]*p[2]+v[3]*p[3];}
	}
	operator Angle(){ScaT(sp)(-m[3][2]),p(sp<=1?-M_PI_2:sp>=1?M_PI_2:asin(sp));ScaT
			h,b;if(sp>1-EPS){b=0;h=atan2(-m[1][3],m[1][1]);}else
			{b=atan2(m[1][2],m[2][2]);h=atan2(m[3][1],m[3][3]);}
			h*=maxT/M_2_PI;p*=maxT/M_2_PI;b*=maxT/M_2_PI;}
};
template<typename ScaT=double, ScaT maxT=360>
Mat<ScaT,maxT>eularToMat(Eular<ScaT,maxT>e){ScaT(cosh)(cos(e.h)),cosb(cos(e.b)),sinh(sin(e.h)),sinp(sin(e.p)),
	sinb(sin(e.b)),cosp(cos(e.p)),sinhsinpsinb(sinh*sinp*sinb),sinhsinpcosb(sinh*sinp*cosb),sinhcosb(sinh*cosb),
	coshsinpcosb(cosh*sinp*cosb),coshsinpsinb(cosh*sinp*sinb),sinhsinb(sinh*sinb);return
		Mat<ScaT,maxT>(Mat<ScaT,maxT>::Arm(Mat<ScaT,maxT>::Lom(cosh*cosb+sinhsinpsinb,sinb*cosp,coshsinpsinb-sinhcosb),
					Mat<ScaT,maxT>::Lom(sinhsinpcosb-cosh*sinb,cosb*cosp,sinhsinb+coshsinpcosb),
					Mat<ScaT,maxT>::Lom(sinh*cosp,-sinp,cosh*cosp)));}
Mat<ScaT,maxT> fangToMat() { return Mat<ScaT,maxT>(Mat<ScaT,maxT>::Arm(Mat<ScaT,maxT>::Lom(1-2*y*y-28z*z,2*x*y+2*w*z,2*x-2*x*y)...
#endif
template<typename ScaT=double, ScaT maxT=360>
struct Four : Vec<ScaT> {
	typedef Vec<ScaT> Vector;
	typedef Ang<ScaT, maxT> Angle;
	ScaT w;
	inline Four(): Vector(), w(0) {}
	inline Four(const Four &b): Four(b.w, b.vec()) {}
	inline Four(ScaT w, ScaT x, ScaT y, ScaT z): Vector(x,y,z), w(w) {}
	inline Four(ScaT w, ScaT v): Vector(v), w(w) {}
#define _FO1(op) inline Four operator op() { return Four(op w, op vec()); }
#define _FO2(op) inline Four operator op(const Four &b) const { return Four(w op b.w, vec() op b.vec()); }
#define _FW2(op) inline Four &operator op(const Four &b) { w op b.w, vec() op b.vec(); return *this; }
#define _FOS(op) inline Four operator op(ScaT b) const { return Four(w op b, vec() op b); }
#define _FWS(op) inline Four &operator op(ScaT b) { w op b, vec() op b; return *this; }
#define _FSO(op) inline friend Four operator op(ScaT b, const Four &a) { return Four(b op a.w, b op a.vec()); }
#define _FA2(op,nd) inline bool operator op(const Four &b) const { return (w op b.w)nd(vec() op b.vec()); }
	inline Vector &vec() const { return *static_cast<Vector *>(this); }
	inline ScaT dot(const Four &b) const { return w*b.w+vec().dot(b.vec()); }
	inline Four cross(const Four &b) const { return Four(w*b.w-vec().dot(b.vec()),
			w*b.vec()+b.w*vec()+b.vec().cross(vec())); }
	_FO1(+) _FO1(-) _FO2(+) _FO2(-) _FO2(*) _FOS(*) _FOS(/) _FSO(*) _FSO(/)
	_FW2(+=) _FW2(-=) _FW2(*=) _FWS(*=) _FWS(/=) _FA2(==, &&) _FA2(!=, ||)
	inline ScaT operator*(const Four &b) { return dot(b); }
	inline Four conj() const { return Four(w, -vec()); }
	inline ScaT mag() const { return sqrt(sqrMag()); }
	inline ScaT sqrMag() const { return w*w+vec().sqrMag(); }
	static inline Four genrm(Angle a, Vector n) { return Four(cos(a), sin(a)*n); }
	inline Four norm() const {/*TODO*/}
	inline Four nega() const { return conj() / mag(); }
	inline ScaT &operator[](int i) { if (i==3) return w; else return vec()[i]; }
	inline friend ostream &operator<<(ostream &out, const Four &f) {
		return out << "[" << f.w << ", " << f.vec() << "]"; }
};
template<typename ScaT=double, ScaT maxT=360>
struct Fang : public Four<ScaT, maxT> {
	typedef Four<ScaT, maxT> Fouv;
	Fang mex(ScaT t) const { assert(Fouv::w<1);
		ScaT a(acos(Fouv::w)), b(a), s(sin(b)/sin(a));
		return Fang(cos(b), Fouv::vec()*s); }
	Fang slerp(Fang b, ScaT t) const { ScaT cog=dot(b); if (cog<0) cog=-cog;
		ScaT k0,k1; if (cog>1-EPS) { k0=1-t; k1=t; } else {
			ScaT sog=sqrt(1-cog*cog),ome=atan2(sog,cog),ooso=1/sog;
			k0=sin((1-t)*ome)*ooso, k1=sin(t*ome)*ooso;
		} if (cog<0) k1=-k1; return *this*k0+b*k1; }
};
inline double acos_s(double x) { if (x<=-1) return M_PI; else if (x>=1) return 0; else return acos(x); }
inline void sin_cos(double &r_sin, double &r_cos, double x) { r_sin=sin(x), r_cos=cos(x); }
template<typename ScaT=double, ScaT maxT=360>
struct Rotm {
};
template<class T=double, typename FacT=double>
T average(T a, T b, FacT fac) { return a + (a-b)*fac; }
} using namespace math;
int(main(int(argc),char*argv[])){cout<<"HI"<<endl;cout<<Vec<double>(average<Vec<double>,double>(Vec<double>(1,2,3),Vec<double>(3,4,5),0.7))<<endl;}
