#from gameobjects.vector3 import *
from VectorClass3d import Vec3d
A = (–6, 2, 2)
B = (7, 5, 10)
plasma_speed = 100. # meters per second
AB = Vector3.from_points(A, B)
print "Vector to droid is", AB
distance_to_target = AB.get_magnitude()
print "Distance to droid is", distance_to_target, "meters"
plasma_heading = AB.get_normalized()
print "Heading is", plasma_heading
#######输出结果#########
Vector to droid is (13, 3, 8)
Distance to droid is 15.5563491861 meters
Heading is (0.835672, 0.192847, 0.514259)
