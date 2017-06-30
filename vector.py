#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import *
from functools import reduce
import operator as op


def response_to(obj, elm):
    try: eval('obj.' + elm)
    except AttributeError: return False
    else: return True


def to_tuple(v):
    try: _ = v.to_tuple
    except AttributeError:
        return tuple(v)
    return v.to_tuple()


class VectorUN:

    def to_tuple(self):
        return tuple(self.to_list())

    def __str__(self):
        return '(' + reduce(lambda x, y: x + ',' + y, map(str, to_tuple(self))) + ')'

    def __add__(self, v):
        return type(self)(*map(lambda x: x[0] + x[1], zip(to_tuple(self), to_tuple(v))))

    def __sub__(self, v):
        return type(self)(*map(lambda x: x[0] - x[1], zip(to_tuple(self), to_tuple(v))))

    def __mul__(self, scale):
        return type(self)(*map(lambda x: x * scale, to_tuple(self)))

    def __div__(self, scale):
        return type(self)(*map(lambda x: x / scale, to_tuple(self)))

    def __neg__(self):
        return type(self)(*map(lambda x: -x, to_tuple(self)))

    def __eq__(self, v):
        return reduce(lambda x, y: x and y, map(lambda x, y: x == y, zip(to_tuple(self), to_tuple(v))))

    def __ne__(self, v):
        return reduce(lambda x, y: x and y, map(lambda x, y: x != y, zip(to_tuple(self), to_tuple(v))))

    def abs(self):
        return sqrt(sum(map(lambda x: x*x, to_tuple(self))))


def init_get_xyz(fun):
    def decorated(self, *xyz):
        if len(xyz) == 1:
            xyz = xyz[0]

            if xyz is not None:
                xyz = to_tuple(xyz)

        return fun(self, *xyz)

    return decorated


def zero_if_zero(n):
    def tag(fun):
        def decorated(self, *xyz):
            if len(xyz) == 0:
                xyz = [0 for _ in range(n)]

            return fun(self, *xyz)

        return decorated

    return tag


class VectorND(VectorUN):

    @init_get_xyz
    def __init__(self, *xyz):
        self.recpos = [*xyz,]

    def to_list(self):
        return self.recpos


class Vector2D(VectorUN):

    @init_get_xyz
    @zero_if_zero(2)
    def __init__(self, *xy):
        self.x, self.y = (*xy,)

    def to_list(self):
        return [self.x, self.y]

    def angle(self):
        return atan(self.y / self.x) if self.x != 0 else pi/2 - atan(self.x / self.y) if self.y != 0 else None

    def dot_shadow(self, a):
        #print('dot_shadow: self.angle() =', self.angle(), 'a =', a)
        if self.angle() == None:
            print('dot_shadow: angle None')
            return 0
        return self.abs() * cos(self.angle() - a)

    def dot_shadow_un(self, a):
        return Vector2D.unangle(self.angle(), self.dot_shadow(a))

    def dot_product(self, v):
        return self.dot_shadow(v.angle()) * v.abs()

    def unangle(a, r=1):
        if a == None:
            print('unangle: angle None')
            return Vector2D()
        return Vector2D(r * cos(a), r * sin(a))

    def absolutely(v):
        return v * (1/v.abs())


class Vector3D(VectorUN):

    @init_get_xyz
    @zero_if_zero(3)
    def __init__(self, *xyz):
        self.x, self.y, self.z = (*xyz,)

    def to_list(self):
        return [self.x, self.y, self.z]

    def get_plane_az(self, az):
        return Vector2D.unangle(Vector2D(self.x, self.y).dot_shadow(az)) * self.abs()

    def dot_shadow(self, a):
        self.abs() * cos(self.angle().z - a.z)
