# cook your code here
import fileinput
import math

while 1:
    try:
        x = int(raw_input())
        y = x
        l = 0
        while y>0:
            l += 1
            y /= 10
            
        y=x
        s=0
        while y:
            s += pow((y%10),l)
            y/=10
        if x==s:
            print "True"
        else:
            print "False"
    except EOFError:
        break