#pragma once

#include "fun.h"

namespace math
{
struct Ang {
//private:
	real a;
public:
	/* warp a to [0, 180) */
	static inline real wrap(real x) {
		x+=M_PI;
		//std::cout<<"x="<<x<<"@"<<M_2_PI*floor(x/M_2_PI)<<std::endl;
		x-=M_2_PI*floor(x/M_2_PI);
		x-=M_PI;
		return(x);}
		//return(x-M_2_PI*((x+M_PI)/M_2_PI));}
	inline Ang(real a): a(wrap(a)) {/*std::cout << "a=" << a << std::endl;*/}
	inline Ang(const Ang &a): a(a.a) {}
	Ang &do_wrap() { a = wrap(a); }
#define _AO1(op) inline Ang operator op() const { return Ang(op a); }
#define _AO2(op) inline Ang operator op(const Ang &b) const { return Ang(a op b.a); }
#define _AW2(op) inline Ang operator op(const Ang &b) { a op b.a; do_wrap(); return *this; }
	_AO1(+) _AO1(-) _AO2(+) _AO2(-) _AW2(=) _AW2(+=) _AW2(-=)
#define _AC2(op) inline bool operator op(const Ang &b) { std::cout<<"bop"<<a<<"\n"; a - b.a; return a op 0; }
	_AC2(==) _AC2(!=) _AC2(>) _AC2(<) _AC2(>=) _AC2(<=)
	inline Ang midden(const Ang &b) const { Ang r(*this+(b-*this));
		return fabs(r-*this>Ang(M_PI_2))?-r:r; }
};
}
