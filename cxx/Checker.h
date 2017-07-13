#pragma once
// Checker.h, included by Material.h

#include "Vector3.h"
#include "Color3.h"
#include "Ray3.h"
#include "Plastic.h"

class Checker : public Plastical {
	real scale;
	Color3 blackColor, whiteColor;
	real reflectiveness;

public:
	Checker(real reflectiveness, real scale, Color3 blackColor = Color3(0, 0, 0), Color3 whiteColor = Color3(1, 1, 1))
		: Plastical(reflectiveness), scale(scale), blackColor(blackColor), whiteColor(whiteColor) {}

	Color3 sample(Ray3 ray, const Geometry &scene, Vector3 position, Vector3 normal) const;
};
