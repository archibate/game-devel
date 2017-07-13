#include "stdinclude.h"
#include "Vector3.h"
#include "Color3.h"
#include "Ray3.h"
#include "Material.h"

Color3 Plastical::sampleColor(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal, Color3 selfColor) const
{
	Color3 reflectColor(this->sampleReflect(ray, scene, position, normal));
	//Color3 radlectColor(this->sampleRadlect(ray, scene, position, normal));

	//selfColor *= this->oldSampleColor(selfColor, ray, position, normal);
	return reflectColor.mixed(selfColor, this->reflectiveness);
}

Color3 Plastical::oldSampleColor(Color3 color, Ray3 ray, Vector3 position, Vector3 normal) const
{
	static Vector3 lightDirection = Vector3(-1, 1, 1).normalized();
	static Color3 lightColor = Color3(1, 1, 1);

	real NdotD(normal.dot(lightDirection));
	return color.mixed(lightColor, MAX(MIN(1 - NdotD, 1), 0));
}

Color3 Plastical::sampleReflect(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const
{
	if (ray.restReflect <= 0)
		return Color3();

	Ray3 reflectRay(ray.generateReflect(position, normal));
	return reflectRay.trace(scene);
}

/*Color3 Plastic::sampleRadlect(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const
{
	if (ray.restReflect <= 0)
		return Color3();

	Vector3 n(normal);
	for (int i = 0; i < 4; i++) {
		Ray3 reflectRay(ray.generateReflect(position, n));
		reflectRay.trace(scene);
		n = (n * n.dot(normal)).normalize();
	}
}*/

Color3 Checker::sample(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const
{
	int n = 0;
	n += floor((position.x + 0.001) * this->scale);
	n += floor((position.y + 0.001) * this->scale);
	n += floor((position.z + 0.001) * this->scale);

	Color3 selfColor = blackColor;
	if (n % 2 != 0)
		selfColor = whiteColor;

	return this->sampleColor(ray, scene, position, normal, selfColor);
}

