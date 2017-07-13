#include "stdinclude.h"
#include "Vector3.h"

Vector2 Vector2::transformed(Trans2x3 matrix)
{
	real new_x(this->x * matrix.x.x + this->y * matrix.x.y + matrix.d.x);
	real new_y(this->x * matrix.y.x + this->y * matrix.y.y + matrix.d.y);
	return Vector2(new_x, new_y);
}

Vector3 Vector3::transformed(Trans3x4 matrix)
{
	real new_x(this->x * matrix.x.x + this->y * matrix.x.y + this->z * matrix.x.z + matrix.d.x);
	real new_y(this->x * matrix.y.x + this->y * matrix.y.y + this->z * matrix.y.z + matrix.d.y);
	real new_z(this->x * matrix.z.x + this->y * matrix.z.y + this->z * matrix.z.z + matrix.d.z);
	return Vector3(new_x, new_y, new_z);
}
