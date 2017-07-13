#include "stdinclude.h"
#include "Ray3.h"
#include "Color3.h"
#include "Vector3.h"
#include "Light.h"
#include "Geometry.h"

LightSample DirectedLight::sample(const Geometry &scene, Vector3 position) const
{
	if (hasShadow) {
		Ray3 shadowRay(position, this->L);
		Intersect shadowResult(scene.intersect(shadowRay));
		if (shadowResult.geometry)
			return LightSample();
	}

	return LightSample(this->L, this->irradiance);
}

Color3 DirectedLight::colorize(const Geometry &scene, Vector3 position, Vector3 normal) const
{
	LightSample lightSample(this->sample(scene, position));

	if (!lightSample)
		return Color3();

	real NdotL(normal.dot(lightSample.L));
	if (NdotL < 0)
		return Color3();

	return lightSample.EL * NdotL;
}

Color3 Lights::colorize(const Geometry &scene, Vector3 position, Vector3 normal) const
{
	Color3 color;
	for (vector<Light *>::iterator it = ligs->begin(); it != ligs->end(); it++)
		color += (*it)->colorize(scene, position, normal);
	return color;
}
