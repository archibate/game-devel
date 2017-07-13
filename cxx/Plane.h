#pragma once
// Plane.h, included by Geometry.h

#include "Vector3.h"
#include "Geometry.h"

class Plane : public Geometry {
protected:
	Vector3 normal;
	real distant;

	Vector3 position;

public:
	Plane(Vector3 normal, real distant, const Material &material) : Geometry(material),
		normal(normal), distant(distant), position(normal * distant) {}

	Intersect intersect(Ray3 ray) const;
};

class DualPlane : public Plane {
public:
	DualPlane(Vector3 normal, real distant, const Material &material)
		: Plane(normal, distant, material) {}

	Intersect intersect(Ray3 ray) const;
};

