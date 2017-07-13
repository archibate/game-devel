#pragma once
// Intersect.h

#include "Vector3.h"

struct Geometry;

struct Intersect {
	const Geometry *geometry;
	real distance;
	Vector3 position;
	Vector3 normal;

	Intersect() : Intersect(nullptr, INFINITY, Vector3(), Vector3()) {}
	Intersect(const Geometry *geometry, real distance, Vector3 position, Vector3 normal)
		: geometry(geometry), distance(distance), position(position), normal(normal) {}

	friend ostream &operator<<(ostream &out, const Intersect &result)
	{ return out << "Intersect of " << result.geometry << " at " << result.position << " normal " << result.normal; }
};

