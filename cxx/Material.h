#pragma once
// Material.h

#include "Color3.h"

struct Geometry;

struct Material {
	virtual Color3 sample(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const = 0;
};

//__attribute__((noinline))
#include "Plastic.h"
#include "Checker.h"
#include "Burning.h"

