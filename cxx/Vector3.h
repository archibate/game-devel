#pragma once
// Vector3.h

typedef double real;

struct Trans2x3;

struct Vector2 {
	real x, y;

	Vector2(real x = 0, real y = 0) : x(x), y(y) {}
	Vector2(const Vector2 &other) : x(other.x), y(other.y) {}

#define _22W(op) Vector2 &operator op(Vector2 other) { this->x op other.x; this->y op other.y; return *this; }
#define _22R(op) Vector2 operator op(Vector2 other) const { return Vector2(this->x op other.x, this->y op other.y); }
#define _2SW(op) Vector2 &operator op(real scale) { this->x op scale; this->y op scale; return *this; }
#define _2SR(op) Vector2 operator op(real scale) const { return Vector2(this->x op scale, this->y op scale); }
#define _2MR(op) Vector2 operator op() const { return Vector2(op this->x, op this->y); }
	_22R(+) _22R(-) _22R(*) _22W(+=) _22W(-=) _22W(*=) _2SR(*) _2SR(/) _2SW(*=) _2SW(/=) _2MR(-)
	operator bool() const { return this->x != 0 && this->y != 0; }

	real sqrLength() const { return this->x*this->x + this->y*this->y; }
	real length() const { return sqrt(this->x*this->x + this->y*this->y); }
	Vector2 normalized() const { return Vector2(*this) / this->length(); }
	Vector2 &normalize() { return *this /= this->length(); }
	real dot(Vector2 other) const { return this->x * other.x + this->y * other.y; }

	Vector2 transformed(Trans2x3 matrix);

	friend ostream &operator<<(ostream &out, Vector2 v) { out << "XY(" << v.x << ", " << v.y << ")"; }
};

struct Trans2x3 {
	Vector2 x, y, d;

	Trans2x3(Vector2 x, Vector2 y, Vector2 d)
		: x(x), y(y), d(d) {}

	Trans2x3(real xx, real xy, real yx, real yy, real dx, real dy)
		: x(xx, xy), y(yx, yy), d(dx, dy) {}
};

struct Trans3x4;

struct Vector3 {
	real x, y, z;

	Vector3(real x = 0, real y = 0, real z = 0) : x(x), y(y), z(z) {}
	Vector3(const Vector3 &other) : x(other.x), y(other.y), z(other.z) {}

#define _32W(op) Vector3 &operator op(Vector3 other) { this->x op other.x; this->y op other.y; this->z op other.z; return *this; }
#define _32R(op) Vector3 operator op(Vector3 other) const { return Vector3(this->x op other.x, this->y op other.y, this->z op other.z); }
#define _3SW(op) Vector3 &operator op(real scale) { this->x op scale; this->y op scale; this->z op scale; return *this; }
#define _3SR(op) Vector3 operator op(real scale) const { return Vector3(this->x op scale, this->y op scale, this->z op scale); }
#define _3MR(op) Vector3 operator op() const { return Vector3(op this->x, op this->y, op this->z); }
	_32R(+) _32R(-) _32R(*) _32W(+=) _32W(-=) _32W(*=) _3SR(*) _3SR(/) _3SW(*=) _3SW(/=) _3MR(-)
	operator bool() const { return this->x != 0 && this->y != 0 && this->z != 0; }

	real sqrLength() const { return this->x*this->x + this->y*this->y + this->z*this->z; }
	real length() const { return sqrt(this->x*this->x + this->y*this->y + this->z*this->z); }
	Vector3 normalized() const { return Vector3(*this) / this->length(); }
	Vector3 &normalize() { return *this /= this->length(); }
	real dot(Vector3 other) const
	{ return this->x * other.x + this->y * other.y + this->z * other.z; }
	Vector3 operator%(Vector3 other) const { return this->cross(other); }
	Vector3 cross(Vector3 other) const
	{ return Vector3(-this->z * other.y + this->y * other.z,
			this->z * other.x - this->x * other.z,
			-this->y * other.x + this->x * other.y); }
	/*Vector2 shadow(Vector3 norm) const
	{ norm * this->dot(norm); }*/

	Vector3 transformed(Trans3x4 matrix);

	friend ostream &operator<<(ostream &out, Vector3 v) { out << "XYZ(" << v.x << ", " << v.y << ", " << v.z << ")"; }
};

struct Trans3x4 {
	Vector3 x, y, z, d;

	Trans3x4(Vector3 x, Vector3 y, Vector3 z, Vector3 d)
		: x(x), y(y), z(z), d(d) {}
};

