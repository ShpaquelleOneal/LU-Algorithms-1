# -*- coding: utf-8 -*-
"""
C2[9]. Without using in-built power and/or root functions, calculate the first 5 perfect cubes bigger or equal to N. Example #1. N=8; answer = 8,27,64,125,216. Example #2. N=-50; answer = -27,-8,-1,0,1.
Created on Mon Oct 31 13:34:08 2022

@author: trej2
"""

d = 0
n = int(input())
if n >= 0:
    while d*d*d < n:
        d+= 1
    for i in range(5):
        print(d*d*d)
        d+=1
        
else:
    while d*d*d > n:
        d-=1
    d+=1
    for i in range(5):
        print(d*d*d)
        d+=1


