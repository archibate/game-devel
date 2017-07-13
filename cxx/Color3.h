#pragma once
// Color3.h

struct Color3 {
	real r, g, b;

	Color3(real r = 0, real g = 0, real b = 0) : r(r), g(g), b(b) {}
	Color3(const Color3 &other) : r(other.r), g(other.g), b(other.b) {}

#define _C32W(op) Color3 &operator op(Color3 other) { this->r op other.r; this->g op other.g; this->b op other.b; return *this; }
#define _C32R(op) Color3 operator op(Color3 other) const { return Color3(this->r op other.r, this->g op other.g, this->b op other.b); }
#define _C3SW(op) Color3 &operator op(real scale) { this->r op scale; this->g op scale; this->b op scale; return *this; }
#define _C3SR(op) Color3 operator op(real scale) const { return Color3(this->r op scale, this->g op scale, this->b op scale); }
#define _C32WX(func, op) Color3 &func { this->r op other.r; this->g op other.g; this->b op other.b; return *this; }
#define _C32RX(func, op) Color3 func const { return Color3(this->r op other.r, this->g op other.g, this->b op other.b); }
	_C32R(+) _C32R(-) _C32R(*) _C32W(+=) _C32W(-=) _C32W(*=) _C3SR(*) _C3SR(/) _C3SW(*=) _C3SW(/=)
	operator bool() const { return this->r != 0 && this->g != 0 && this->b != 0; }

	//_C32RX(mixed(Color3 other, real factor = 0.5), * factor + (1 - factor) *)
	//_C32WX(mixwith(Color3 other, real factor = 0.5), * factor + (1 - factor) *)
	Color3 mixed(Color3 other, real factor = 0.5) const { return *this * factor + other * (1 - factor); }
	Color3 mixwith(Color3 other, real factor = 0.5) const { return *this * factor += other * (1 - factor); }

	friend ostream &operator<<(ostream &out, Color3 c) { out << "RGB(" << c.r << ", " << c.g << ", " << c.b << ")"; }
};
