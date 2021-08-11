#!/usr/bin/python
# coding = utf-8

import time

print(time.strftime("%Y-%m-%d %H:%M:%S",time.localtime()))

print(time.strftime("%a %b %d %H:%M:%S %Y",time.localtime()))

a = "Sat Mar 28 22:24:24 2016"
print(time.mktime(time.strptime(a,"%a %b %d %H:%M:%S %Y")))