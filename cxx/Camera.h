#pragma once
// Camera.h

#include "Vector3.h"
#include "Ray3.h"

class Camera {
	Vector3 eye;
	Vector3 front, right, up;
	real fovScale;
	/*Color3 color;*/

public:
	Camera(Vector3 eye = Vector3(0, 0, 12), Vector3 front = Vector3(0, 0, -1), Vector3 refUp = Vector3(0, 1, 0),
			real fov = 80/*, Color3 color = Color3(0.5, 0.5, 0.5)*or(0.4, 0.6, 0.7)*/)
		: eye(eye), front(front), right(front.cross(refUp)), up(front.cross(this->right)),
		  fovScale(tan(fov * M_PI / 360))/*, color(color)*/
	{}

	Ray3 generateRay(real sx, real sy) const
	{
		Vector3 direction = this->front + this->up * sy * fovScale + this->right * sx * fovScale;
		return Ray3(this->eye, direction/*, this->color*/);
	}

	friend ostream &operator<<(ostream &out, const Camera &camera)
	{
		return out << "Camera(eye = " << camera.eye << ", front = " << camera.front
			<< ", right = " << camera.right << ", up = " << camera.up << ")";
	}
};

