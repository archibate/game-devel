#pragma once

#include "fun.h"

namespace math
{
#define XYZ(v) (v).x, (v).y, (v).z
struct Vec {
//private:
	real x, y, z;
public:
	inline Vec(): Vec(0,0,0) {}
	inline Vec(real x, real y, real z): x(x),y(y),z(z) {}
	inline Vec(const Vec &b): Vec(b.x,b.y,b.z) {}
#define _O1(op) inline Vec operator op() const { return Vec(op x, op y, op z); }
#define _O2(op) inline Vec operator op(const Vec &b) const { return Vec(x op b.x, y op b.y, z op b.z); }
#define _W2(op) inline Vec &operator op(const Vec &b) { x op b.x, y op b.y, z op b.z; return *this; }
#define _OS(op) inline Vec operator op(real b) const { return Vec(x op b, y op b, z op b); }
#define _WS(op) inline Vec &operator op(real b) { x op b, y op b, z op b; return *this; }
#define _SO(op) inline friend Vec operator op(real b, const Vec &a) { return Vec(b op a.x, b op a.y, b op a.z); }
#define _A2(op,nd) inline bool operator op(const Vec &b) const { return (x op b.x)nd(y op b.y)nd(z op b.z); }
	_O1(+) _O1(-) _O2(+) _O2(-) _O2(*) _OS(*) _OS(/) _SO(*) _SO(/)
	_W2(=) _W2(+=) _W2(-=) _W2(*=) _WS(*=) _WS(/=) _A2(==, &&) _A2(!=, ||)
	//inline real operator*(const Vec &b) { return dot(b); }	/* TODO: is this a bad idea to overload dot() on '*'? */
	/* sqrMag() can be fastter in some situation that needs squared radius */
	inline real sqrMag() const { return x*x+y*y+z*z; }
	inline real mag() const { return sqrt(sqrMag()); }
	inline real sqrLen() const { return sqrMag(); }	/* len() is same to mag() */
	inline real len() const { return mag(); }
	inline Vec norm() const { return *this/len(); }
	inline Vec &norm_() { return *this/=len(); }	/* like norm(), but norm_() does write back */
	inline real dot(const Vec &b) const { return x*b.x+y*b.y+z*b.z; }
	inline Vec cross(const Vec &b) const { return Vec(y*b.z-z*b.y, z*b.x-x*b.z, x*b.y-y*b.x); }
	inline Vec cross_(const Vec &b) { real x(x),y(y),z(z);
		this->x=y*b.z-z*b.y; this->y=z*b.x-x*b.z; this->z=x*b.y-y*b.x; }	/* does write back */
	inline Vec shadow(const Vec &n) { return n*dot(n); }	/* this's shadow on 'n' */
	Vec trad(Vec a, Vec nx, Vec ny=Vec()) const { Vec n(*this);	/* ignore it... */
		if (ny == Vec()) ny = n.cross(nx); n*=a.z; n+=nx*a.x; n+=ny*a.y; return n; }
	/* friend overrides: (easy to use) */
	inline friend real sqrMag(const Vec &a) { return a.sqrMag(); }
	inline friend real mag(const Vec &a) { return a.mag(); }
	inline friend real sqrLen(const Vec &a) { return a.sqrLen(); }
	inline friend real len(const Vec &a) { return a.len(); }
	inline friend Vec norm(const Vec &a) { return a.norm(); }
	inline friend real dot(const Vec &a, const Vec &b) { return a.dot(b); }
	inline friend Vec cross(const Vec &a, const Vec &b) { return a.cross(b); }
	inline friend Vec shadow(const Vec &n, const Vec &v) { return n*n.dot(v); }
	inline real operator[](int i) const { if (i==0) return x;
		else if (i==1) return y; else if (i==2) return z;
		else return 1; }
#ifdef _NEED_FRIEND_OSTREAM	/* so we can use 'std::cout << v' to print it out */
	inline friend std::ostream &operator<<(std::ostream &out, const Vec &v) {
		return out << "(" << v.x << ", " << v.y << ", " << v.z << ")"; }
#endif
};
}
