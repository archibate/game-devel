#pragma once
// Light.h

#include "Vector3.h"

struct Geometry;

struct LightSample {
	Vector3 L;
	Color3 EL;

	LightSample(Vector3 L = Vector3(), Color3 EL = Color3())
		: L(L), EL(EL) {}

	operator bool() { return (bool) this->L; }
};

struct Light {
	virtual Color3 colorize(const Geometry &scene, Vector3 position, Vector3 normal) const = 0;
};

class DirectedLight : public Light {
	Color3 irradiance;
	Vector3 L;
	bool hasShadow;

public:
	DirectedLight(Color3 irradiance, Vector3 direction, bool hasShadow = true)
		: irradiance(irradiance), L(-direction.normalize()), hasShadow(hasShadow) {}

	Color3 colorize(const Geometry &scene, Vector3 position, Vector3 normal) const;

protected:
	LightSample sample(const Geometry &scene, Vector3 position) const;
};

class Lights : public Light {
	vector<Light *> *ligs;

public:
	Lights() : ligs(new vector<Light *>) {}
	Lights(Light *_ligs[], size_t max)
		: ligs(new vector<Light *>)
	{ for (int i = 0; i < max; i++) this->ligs->push_back(_ligs[i]); }

	~Lights(void)
	{ delete ligs; }

	Color3 colorize(const Geometry &scene, Vector3 position, Vector3 normal) const;

	void add(Light *light) { this->ligs->push_back(light); /*cout<<((DirectedLight*)ligs->at(0))->L<<endl;*/ }
};

