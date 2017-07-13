#pragma once
// Geometry.h

#include "Vector3.h"
#include "Ray3.h"
#include "Intersect.h"
#include "Material.h"

struct Geometry {
	const Material &material;

	Geometry(const Material &material = Plastic(Color3(1, 1, 1), 0.5)) : material(material) {}

	virtual Intersect intersect(Ray3 ray) const = 0;
};

class Scene : public Geometry {
	vector<Geometry *> *geos;

public:
	Scene() : geos(new vector<Geometry *>()) {}

	Scene(Geometry *_geos[], size_t max)
		: geos(new vector<Geometry *>())
	{ for (int i = 0; i < max; i++) this->geos->push_back(_geos[i]); }

	~Scene(void)
	{ delete geos; }

	Intersect intersect(Ray3 ray) const;

	void add(Geometry *geometry) { this->geos->push_back(geometry); }
};

#include "Plane.h"
#include "Sphere.h"
#include "Cube.h"

