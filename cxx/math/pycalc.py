#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import *
import operator
import numpy as np

while True:
    try:
        s = input("\033[31;1mpycalc \033[32;1m>\033[0m ")
    except EOFError:
        print("exiting...")
        break
    else:
        print(eval(s))
