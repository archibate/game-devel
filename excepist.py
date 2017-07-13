#!/usr/bin/env python
# -*- coding: utf-8 -*-

class QuitException(BaseException):
    def __init__(self, *args):
        BaseException.__init__(self, *args)

