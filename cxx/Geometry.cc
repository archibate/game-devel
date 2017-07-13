#include "stdinclude.h"
#include "Vector3.h"
#include "Ray3.h"
#include "Geometry.h"
#include "Intersect.h"
#include "Material.h"

Intersect Scene::intersect(Ray3 ray) const
{
	Intersect minResult;
	real minDistance(INFINITY);
	for (vector<Geometry *>::iterator it = geos->begin(); it < geos->end(); it++) {
		Intersect result = (*it)->intersect(ray);
		if (result.geometry && result.distance < minDistance) {
			minDistance = result.distance;
			minResult = result;
		}
	}
	return minResult;
}

Intersect FinitivePlane::intersect(Ray3 ray) const
{
	Intersect result(Plane::intersect(ray));

	if (!result.geometry)
		return Intersect();

	Vector3 r(result.position - this->center);
	if (r.sqrLength() > this->sqrRadius)
		return Intersect();

	return result;
}

Intersect RectPlane::intersect(Ray3 ray) const
{
	Intersect result(Plane::intersect(ray));

	if (!result.geometry)
		return Intersect();

	Vector3 r(result.position - this->center);
	if (ABS(r.dot(this->direction1)) > this->radius1)
		return Intersect();

	if (ABS(r.dot(this->direction2)) > this->radius2)
		return Intersect();

	return result;
}

Intersect Plane::intersect(Ray3 ray) const
{
	real a(ray.direction.dot(this->normal));
	if (a >= 0)
		return Intersect();

	real b(this->normal.dot(ray.origin - this->position));
	real distance(-b / a);
	Vector3 normal(this->normal);
	Vector3 position(ray.getPoint(distance));

	return Intersect(this, distance, position, normal);
}

Intersect DualPlane::intersect(Ray3 ray) const
{
	return Plane::intersect(ray);

	real a(ray.direction.dot(this->normal));
	if (a == 0)
		return Intersect();

	real b(this->normal.dot(ray.origin - this->position));
	real distance(-b / a);
	Vector3 normal(a < 0 ? this->normal : -this->normal);
	Vector3 position(ray.getPoint(distance));

	return Intersect(this, distance, position, normal);
}

Intersect Sphere::intersect(Ray3 ray) const
{
	Vector3 v(ray.origin - this->center);
	real r_cos_theta(ray.direction.dot(v));

	if (r_cos_theta > 0)
		return Intersect();

	real a0(v.sqrLength() - this->sqrRadius);

	real discr(r_cos_theta * r_cos_theta - a0);
	if (discr < 0)
		return Intersect();

	real distance(-r_cos_theta - sqrt(discr));
	Vector3 position(ray.getPoint(distance));
	Vector3 normal(position - this->center);
	return Intersect(this, distance, position, normal.normalized());
}
