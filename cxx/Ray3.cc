#include "stdinclude.h"
#include "Vector3.h"
#include "Color3.h"
#include "Ray3.h"
#include "Light.h"
#include "Geometry.h"
#include "Material.h"

Color3 Ray3::trace(const Geometry &scene, const Light &light) const
{
	Intersect result(scene.intersect(*this));
	if (!result.geometry)
		return Color3(/*0.7, 0.6, 0.5*/);

	Color3 lightColor(light.colorize(scene, result.position, result.normal));

	Color3 selfColor(result.geometry->material.sample(*this, scene,
				result.position, result.normal));

	return selfColor * lightColor;
}

Ray3 Ray3::generateReflect(Vector3 position, Vector3 normal/*, Color3 reflectColor*/)
{
	Vector3 r(this->direction + normal * (-2 * this->direction.dot(normal)));
	return Ray3(position, r/*, reflectColor*/, this->restReflect - 1);
}
