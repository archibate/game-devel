#pragma once
// Cube.h

#include "Vector3.h"
#include "Geometry.h"

class FinitivePlane : public Plane {
	Vector3 center;
	real radius;
	real sqrRadius;

public:
	FinitivePlane(const Plane &plane, real radius)
		: Plane(plane), radius(radius) {}

	FinitivePlane(Vector3 center, Vector3 normal, real radius, const Material &material)
		: Plane(normal, normal.dot(center), material), center(center),
		  radius(radius), sqrRadius(radius * radius) {}

	Intersect intersect(Ray3 ray) const;
};

class RectPlane : public DualPlane {
	Vector3 center;
	Vector3 direction1, direction2;
	real radius1, radius2;

public:
	RectPlane(Vector3 center, Vector3 normal, Vector3 direction1, Vector3 direction2,
			real radius1, real radius2, const Material &material)
		: DualPlane(normal, normal.dot(center), material), center(center),
		  direction1(direction1), direction2(direction2),
		  radius1(radius1), radius2(radius2) {}

	Intersect intersect(Ray3 ray) const;
};

struct Cube : Geometry {
	RectPlane left, right, down, up, back, front;
	/*real right_radius, up_radius, front_radius;*/
	Scene scene;

	Cube(Vector3 center, Vector3 right, Vector3 up, Vector3 front,
			real right_radius, real up_radius, real front_radius, const Material &material)
#define ASDEF(left, right, up, front) \
		left(center - right * right##_radius, -right, -up, -front, up##_radius, front##_radius, material), \
		right(center + right * right##_radius, right, up, front, up##_radius, front##_radius, material)
		: ASDEF(left, right, up, front),
		  ASDEF(down, up, front, right),
		  ASDEF(back, front, right, up)
	{ scene.add(&this->right); scene.add(&this->up); scene.add(&this->front);
		/*scene.add(&this->left); scene.add(&this->down); scene.add(&this->back);*/ }

	Intersect intersect(Ray3 ray) const { return scene.intersect(ray); }
};

