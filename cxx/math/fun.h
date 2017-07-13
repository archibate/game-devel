#pragma once

#include <cmath>
#undef M_PI
#undef M_2_PI
#define M_PI 1
#define M_2_PI 2//DBGTST

#define M_DEG (M_PI/180)
#define DEG *M_DEG


#define M_INF 1.0e5	/* (nearly) infinity, below the really INFINITY */
#define M_EPS 1.0e-4	/* (nearly) epsllion */
#define CLAMP(x) ({typeof(x)_x_=(x);_x_<0?0:_x_>1?1:_x_;})

namespace math
{
#define bcopy(src,dst,size) memcpy((dst),(src),(size))

#define _FLOAT l	/* to fit more portable */
#if _FLOAT==f
	typedef float real;
#elif _FLOAT==l
	typedef long double real;
#else
	typedef double real;
#endif

	const real INF = M_INF;
	const real EPS = M_EPS;

	/* let's create our own math lib (well... what are you doing :) */
#define _CONCAT(a,b) a##b
#define CONCAT(a,b) _CONCAT(a,b)
#define _STDFUN(fun) CONCAT(fun, _FLOAT)
#define _STDFUN_COPY1(fun) constexpr inline real fun(real x) { return _STDFUN(fun)(x); }
#define _STDFUN_COPY2(fun) constexpr inline real fun(real x, real y) { return _STDFUN(fun)(x, y); }
#define _STDFUN_COPY3(fun) constexpr inline real fun(real x, real y, real z) { return _STDFUN(fun)(x, y, z); }
	_STDFUN_COPY1(fabs) _STDFUN_COPY2(fmin) _STDFUN_COPY2(fmax)
	_STDFUN_COPY2(fdim) _STDFUN_COPY2(fmod) _STDFUN_COPY3(fma)
	_STDFUN_COPY2(pow) _STDFUN_COPY1(sqrt) _STDFUN_COPY1(cbrt)
	_STDFUN_COPY1(sin) _STDFUN_COPY1(cos) _STDFUN_COPY1(tan)
	_STDFUN_COPY1(asin) _STDFUN_COPY1(acos) _STDFUN_COPY1(atan)
	_STDFUN_COPY1(sinh) _STDFUN_COPY1(cosh) _STDFUN_COPY1(tanh)
	_STDFUN_COPY1(asinh) _STDFUN_COPY1(acosh) _STDFUN_COPY1(atanh)
	_STDFUN_COPY2(atan2) _STDFUN_COPY1(exp) _STDFUN_COPY1(exp2)
	_STDFUN_COPY1(log) _STDFUN_COPY1(log2) _STDFUN_COPY1(log10)
	_STDFUN_COPY1(floor) _STDFUN_COPY1(ceil) _STDFUN_COPY1(erf)

	/* now, it's really our own lib */
	/* safe version for acos, no domain error, it clamps anyway */
	inline real acos_s(real x) {
		if (x<=-1) return M_PI;
		else if (x>=1) return 0;
		else return acos(x); }

	/* sin_cos() computes sin() and cos() in once */
	inline void sin_cos(real &r_sin, real &r_cos, real x) {
		r_sin=sin(x), r_cos=cos(x); }

	/* linear average for template class */
	template<class T=real, typename FacT=real>
	T average(T a, T b, FacT fac) {
		return a + (a-b)*fac;
	}

	/* conversation from radians and degrees */
	inline real radians(real deg) {
		return deg * M_PI / 180;
	}
	inline real degrees(real rad) {
		return rad / M_PI * 180;
	}
}

/* allocate a uninitialized object (I just fooled C++ anonymously :) */
#define _ANONY _CONCAT(_anony_, __LINE__)
#define uninit(T,m)char(_ANONY)[sizeof(T)];T&(m)=*reinterpret_cast<T*>_ANONY;
