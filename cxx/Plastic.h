#pragma once
// Plastic.h, included by Material.h

#include "Vector3.h"
#include "Color3.h"
#include "Ray3.h"
#include "Material.h"

class Plastical : public Material {
	real reflectiveness;

public:
	Plastical(real reflectiveness) : reflectiveness(reflectiveness) {}

	virtual Color3 sample(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const = 0;

protected:
	Color3 sampleReflect(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const;
	//Color3 sampleRadlect(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const;
	Color3 sampleColor(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal, Color3 color) const;
	Color3 oldSampleColor(Color3 color, Ray3 ray, Vector3 position, Vector3 normal) const;
};

class Plastic : public Plastical {
	Color3 color;

public:
	Plastic(Color3 color, real reflectiveness) : Plastical(reflectiveness), color(color) {}

	Color3 sample(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const
	{ return this->sampleColor(ray, scene, position, normal, this->color); }
};

