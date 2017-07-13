#pragma once

#include "fun.h"
#include "Vec.h"

namespace math
{
struct Mat3x3 {
//private:

	/* NOTE: we use column vector, for OpenGL and better use */
	/* but we've declare it in an reverse way */
	/* node is named by m{col}{row} m{new_fr}{om_old} */

	//real m11, m21, m31;//   V				// x base axis
	//real m12, m22, m32;// (row)	<- input ([x y z])	// y base axis
	//real m13, m23, m33;//   V				// z base axis
	//  >  (column)  >
	//	  |
	//        V
	//	output
	//    [x' y' z']

	Vec mx, my, mz;		/* these are column vectors */

public:
	inline Mat3x3(const real *arr) {	/* copy from a C-style array */
		static_assert(sizeof(Vec)==sizeof(real)*3);
		bcopy(arr, this, sizeof(Vec)*3); }
	inline Mat3x3(): mx(1,0,0), my(0,1,0), mz(0,0,1) {}

	/* build a 3x3 matrix from a eular angle */
	/* you can also use Mat3x3(-e) to build a reversed matrix */
	Mat3x3(const Eular &e)
	{
		real sh, ch, sp, cp, sb, cb;
		sin_cos(sh, ch, e.h.a);
		sin_cos(sp, cp, e.p.a);
		sin_cos(sb, cb, e.b.a);
		// x base axis
		real m11 = ch*cb+sh*sp*sb;
		real m12 = sb*cp;
		real m13 = -sh*cb+ch*sp*sb;
		// y base axis
		real m21 = -ch*sb+sh*sp*cb;
		real m22 = cb*cp;
		real m23 = sb*sh+ch*sp*cb;
		// z base axis
		real m31 = sh*cp;
		real m32 = -sp;	// eg. new z axis' dot on old y axis, is -sin(pitch)  z for 3, and y for 2  m32, m{new}{old}
		real m33 = ch*cp;
		mx1 = Vec(m11, m
	}

	Vec trans(const Vec &v) const {
		return Vec(	m11*v.x + m12*v.y + m13*v.z,
				m21*v.x + m22*v.y + m23*v.z,
				m31*v.x + m32*v.y + m33*v.z);
	}

	/* untrans(): reverse the matrix, then trans(),  (it's undo one) */
	Vec untrans(const Vec &v) const {
		return Vec(	m11*v.x + m21*v.y + m31*v.z,
				m12*v.x + m22*v.y + m32*v.z,
				m13*v.x + m23*v.y + m33*v.z);
	}

#ifdef _NEED_FRIEND_OSTREAM
	inline friend std::ostream &operator<<(std::ostream &out, const Mat3x3 &m) {
#define _OUE(x) << m.x
#define _OUT(x) _OUE(x) << ", "
		return out << "[[" _OUT(m11) _OUT(m12) _OUE(m13) << "], "
			    << "[" _OUT(m21) _OUT(m22) _OUE(m23) << "], "
			    << "[" _OUT(m31) _OUT(m32) _OUE(m33) << "]]";
	}
#endif
};

struct Mat4x3 : Mat3x3 {
//private:
	//real m14, m24, m34;	// the translation column-vector
	Vec mx4;		/* translation's column-vector */

public:
	inline Mat4x3(const real *arr) {
		bcopy(arr, this, sizeof(Vec)*4); }
	inline Mat4x3(): Mat3x3(),
		mx4(0,0,1) {}

	/* from the translation of Vector d, zero Mat3x3 */
	inline Mat4x3(const Vec &d): Mat3x3(), mx4(d) {}

	/* build from a Eular angle e and setup by the translation of Vector d */
	inline Mat4x3(const Vec &d, const Eular &e): Mat3x3(e), mx4(d) {}
	/* you can use Mat4x3(-d, -e) to build a reverse one */

	Vec trans(const Vec &v) const {
		return Mat3x3::trans() + mx4;	/* so simple */
	}

	/* TODO: Mat4x3 &operator*=(const Mat4x3 &T);  use left cross: A' = AT, A *= T */
};
}
