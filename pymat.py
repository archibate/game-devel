#!/usr/bin/env python
# -*- coding: utf-8 -*-



class array(list):

    def _copy(a):
        return [xa for xa in a]

    def __mul__(a, b):
        return [xa * xb for xa, xb in zip(a, b)]

    def _cons(a, *b):
        return [xb for xb in b]



class matrix(array):

    def cons2d(*lst):
        return matrix([array((xa for xa in ya)) for ya in lst])

    def ror2d(a):
        b = matrix()
        for ya in a:
            yb = matrix()
            for xa in ya:
                yb.append(xa)
            b.append(yb)
        return b

    def mul2d(a, b):
        return b.ror2d() * a





if __name__ == '__main__':

    m = matrix.cons2d([[12, 5], [2, 0], [4, 3]])
    print(m)

    a = matrix([array([12, 4]), array([4, 8])])
    b = matrix([array([1, 4]), array([6, 2])])
    print(a.mul2d(b))
    print(m.mul2d(b.append(array([7, 2]))))
