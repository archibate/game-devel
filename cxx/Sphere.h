#pragma once
// Sphere.h, included by Geometry.h

#include "Vector3.h"
#include "Geometry.h"

class Sphere : public Geometry {
	Vector3 center;
	real radius;
	real sqrRadius;

public:
	Sphere(Vector3 center, real radius, const Material &material) : Geometry(material),
		center(center), radius(radius), sqrRadius(radius * radius) {}

	Intersect intersect(Ray3 ray) const;
};

