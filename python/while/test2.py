#!/usr/bin/python
#coding = utf-8
i = 1
while i < 10:
    i+=1
    if i%2 > 0:
        continue
    print(i)

i = 1
while 1:
    print(i)
    i+=1
    if i>10:
        break