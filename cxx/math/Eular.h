#pragma once

#include "Ang.h"
#include "Quad.h"

namespace math
{
struct Eular {
//private:
	Ang h,b;	// heading & bank, in range [-180, 180)
	Ang p;		// pitch, in range [-90, 90]
public:
	Eular(): Eular(0,0,0) {}
	Eular(real h, real p, real b): h(h), p(p), b(b) { do_wrap(); }
	Eular(Ang h, Ang p, Ang b): h(h), p(p), b(b) { do_wrap(); }
#define _EO1(op) inline Eular operator op() const { return Eular(op h, op p, op b); }
#define _EO1(op) inline Eular operator op() const { return Eular(op h, op p, op b); }
#define _EO2(op) inline Eular operator op(const Eular &e) const { return Eular(h op e.h, p op e.h, b op e.b); }
#define _EW2(op) inline Eular operator op(const Eular &e) { return Eular(h op e.h, p op e.h, b op e.b); }
	_EO1(+) _EO1(-) _EO2(+) _EO2(-) _EW2(=) _EW2(+=) _EW2(-=)
protected:
	inline Eular &do_wrap() { if (p.a>M_PI_2) { std::cout<<p.a<<"-=pi/2\n";  p-=Ang(M_PI_2); h.a=-h.a; }	// TODO: consider p.a-=M_PI_2?
		else if (p.a<-M_PI_2) { std::cout<<p.a<<"+=pi/2\n"; p+=Ang(M_PI_2); h.a=-h.a; }
		if (fabs(p.a) > M_PI_2-EPS) b=0;
		return *this; }

	/* gong-lied methods:) */
	void from_quaternion(const Quad &q) {
		real sp(-2*(q.y*q.z - q.w*q.x));
		if (fabs(sp)>1-EPS) {
			p = M_2_PI*sp;
			h = atan2(-q.x*q.z + q.w*q.y, 0.5 - q.y*q.y - q.z*q.z);
			b = 0;
		}}
	/*void from_o2w_matrix(const Mat &m) {
		real sp(-m.m23);
		if (fabs(sp)>1-EPS) {
			p = M_PI_2*sp;
			h = atan2(-m.m32, m.m11);
			b = 0;
		} else {
			p = asin(sp);
			h = atan2(m.m13, m.m33);
			b = atan2(m.m21, m.m22);
		}
	}*/
};
}
