#progma once
// Source.h

#include "Vector3.h"
#include "Geometry.h"

struct BallSource : Sphere {
	BallSource(Vector3 position) : position(position) {}
};
