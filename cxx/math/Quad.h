#pragma once

#include "fun.h"
#include "Vec.h"

namespace math
{
struct Eular;

struct Quad : Vec {
//private:
	real w;
public:
	inline Quad(): Vec(), w(0) {}
	inline Quad(const Quad &b): Quad(b.w, b.vec()) {}
	inline Quad(real w, real x, real y, real z): Vec(x,y,z), w(w) {}
	inline Quad(real w, const Vec &v): Vec(v), w(w) {}
#define _QO1(op) inline Quad operator op() const { return Quad(op w, op vec()); }
#define _QO2(op) inline Quad operator op(const Quad &b) const { return Quad(w op b.w, vec() op b.vec()); }
#define _QW2(op) inline Quad &operator op(const Quad &b) { w op b.w, vec() op b.vec(); return *this; }
#define _QOS(op) inline Quad operator op(real b) const { return Quad(w op b, vec() op b); }
#define _QWS(op) inline Quad &operator op(real b) { w op b, vec() op b; return *this; }
#define _QSO(op) inline friend Quad operator op(real b, const Quad &a) { return Quad(b op a.w, b op a.vec()); }
#define _QA2(op,nd) inline bool operator op(const Quad &b) const { return (w op b.w)nd(vec() op b.vec()); }
	inline Vec &vec() { return *static_cast<Vec *>(this); }
	inline const Vec &vec() const { return *static_cast<const Vec *>(this); }
	inline real dot(const Quad &b) const { return w*b.w+vec().dot(b.vec()); }
	Quad cross(const Quad &b) const { return Quad(w*b.w-vec().dot(b.vec()),
			w*b.vec()+b.w*vec()+b.vec().cross(vec())); }
	/* like cross(), but cross_() does write back */
	Quad &cross_(const Quad &b) { real new_w = w*b.w-vec().dot(b.vec());
			Vec new_v = w*b.vec()+b.w*vec()+b.vec().cross(vec());
			vec()=new_v; w=new_w; }
	/* Quad overrides Vec's operators */
	_QO1(+) _QO1(-) _QO2(+) _QO2(-) _QO2(*) _QOS(*) _QOS(/) _QSO(*) _QSO(/)
	_QW2(+=) _QW2(-=) _QW2(*=) _QWS(*=) _QWS(/=) _QA2(==, &&) _QA2(!=, ||)
	///* NOTE: we overload '*' as dot in Vec::operator*(), but here we use cross instead */
	///* TODO: is this a bad idea to overload cross() on '*'? */
	//inline Quad operator*(const Quad &b) const { return cross(b); }
	//inline Quad &operator*=(const Quad &b) { return cross_(b); }
	inline Quad conj() const { return Quad(w, -vec()); }
	inline real mag() const { return sqrt(sqrMag()); }
	inline real sqrMag() const { return w*w+vec().sqrMag(); }
	static inline Quad gen_norm(Ang a, Vec n) {	/* a=theta/2 */
		return Quad(cos(a.a), sin(a.a)*n); }
	//TODO: inline Quad norm_() const {...}
	inline Quad nega() const { return conj() / mag(); }
	inline real operator[](int i) const {
		if (i==3) return w; else return vec()[i]; }
#ifdef _NEED_FRIEND_OSTREAM
	inline friend std::ostream &operator<<(std::ostream &out, const Quad &f) {
		return out << "[" << f.w << ", " << f.vec() << "]"; }
#endif
	/* gong-lied methods:) */
	/* load_*() does load Quad datas from given format of data */
	static Quad rotationAround(real th, Vec n) {
		real a(th/2);
		return Quad(cos(a),n*sin(a));
	}
	// TODO: real getRotationAngle() const;
	// TODO: Vec getRotationAxis() const;
	/* TODO: pick up a better name?? */
	/* Quad mextur(real t) const { assert(Quad::w<1);
		real a(acos(w)), b(a), s(sin(b)/sin(a));
		return Quad(cos(b), vec()*s); } */
	/* Sphere Linear intERPolation (TODO: IOCCC's coding-style ??) */
	Quad slerp(Quad b, real t) const { real cog=dot(b); if (cog<0) cog=-cog;
		real k0,k1; if (cog>1-EPS) { k0=1-t; k1=t; } else {
			real sog=sqrt(1-cog*cog),ome=atan2(sog,cog),ooso=1/sog;
			k0=sin((1-t)*ome)*ooso, k1=sin(t*ome)*ooso;
		} if (cog<0) k1=-k1; return *this*k0+b*k1; }
	/* TOMYSELF: oh yeah, you can impelement a non-perspective camera using slerp() */
};
}
