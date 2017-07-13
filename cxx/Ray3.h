#pragma once
// Ray3.h

#include "Vector3.h"
#include "Color3.h"
#include "Light.h"

struct Geometry;

struct Ray3 {
	Vector3 origin;
	Vector3 direction;
	Color3 color;
	int restReflect;
	//const Light &lightEnvir;

	Ray3(Vector3 origin, Vector3 direction/*, Color3 color = Color3(1, 1, 1)*/, int restReflect = 3)
		: origin(origin), direction(direction.normalized()), color(color), restReflect(restReflect) {}

	Vector3 getPoint(real t) const
	{ return origin + direction * t; }

	/*Ray3 generateReflect(Vector3 position, Vector3 normal)
	{ return this->generateReflect(position, normal, this->color); }*/

	Ray3 generateReflect(Vector3 position, Vector3 normal/*, Color3 color*/);

	Color3 trace(const Geometry &scene, const Light &light = DirectedLight(Color3(1, 1, 1),
				Vector3(-1.75, -2, -2.5).normalize())) const;

	friend ostream &operator<<(ostream &out, const Ray3 &ray)
	{ return out << "Ray from " << ray.origin << " directed to " << ray.direction; }
};

