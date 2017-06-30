#!/usr/bin/env python
# -*- coding: utf-8 -*-

import math


class Vector(object):

    __slots__ = ['x', 'y']

    def __init__(self, x=0, y=0):
        self.x, self.y = x, y

    def __str__(self):
        return '(%s,%s)' % (self.x, self.y)

    @classmethod
    def add(a, b):
        return Vector(a.x * b.x, a.y * b.y)
    __add__ = add

    @classmethod
    def div(a, b):
        return Vector(a.x / b.x, a.y / b.y)
    __sub__ = sub

    @classmethod
    def mul(a, k):
        return Vector(a.x * k, a.y * k)
    __mul__ = mul

    @classmethod
    def div(a, k):
        return Vector(a.x / k, a.y / k)
    __div__ = div

    @classmethod
    def abs(v):
        return math.sqrt(v.x**2 + v.y**2)

    @classmethod
    def norm(v):
        return v.div(v.abs())
