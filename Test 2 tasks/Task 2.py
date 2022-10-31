# -*- coding: utf-8 -*-
"""
C1[6]. Given natural number N. Without using in-built power and/or root functions, calculate the first 5 perfect squares bigger or equal to N. Example. N = 20; answer: 25,36,49,64,81.

Created on Mon Oct 31 13:37:58 2022

@author: trej2
"""

d=0
n=int(input())
while d*d<n:
    d+=1
for i in range(5):
    print(d*d)
    d+=1
