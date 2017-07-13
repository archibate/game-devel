#pragma once
// Burning.h, included from Material.h

#include "Vector3.h"
#include "Material.h"

class Burning : public Material {
protected:
	virtual Color3 lightColor(real NdotD) const = 0;

public:
	Color3 sample(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const
	{
		real NdotD(normal.dot(ray.direction));
		if (NdotD >= 0)
			return Color3();

		//Vector3 r(ray.origin - position);
		return this->lightColor(NdotD);
	}
};

class Blackbody : public Burning {
	Color3 color;

public:
	Blackbody(Color3 color) : color(color) {}

protected:
	Color3 lightColor(real NdotD) const
	{ return this->color * sqrt(-NdotD); }
};

