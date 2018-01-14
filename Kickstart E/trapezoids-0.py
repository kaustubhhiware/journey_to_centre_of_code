#!/bin/python
from math import factorial as f

def nCr(n,r):
    return f(n) / f(r) / f(n-r)

def line(a,b, x):
    if a + 2*x == b:
        return True
    if b + 2*x == a:
        return True
    return False

def identical3(x, l, c):
    if c < 3:
        return 0
    xc3 = nCr(c, 3)
    l2c1 = len(l) - l.count(x) - l.count(3*x) # 3, 3, 3, 9 not valid
    # print 'identical3(',x,') = ', xc3,'*', l2c1
    return xc3 * l2c1
    
    
def identical(x, l, c):
    # receives x as identical length, find number of trapezoids with this
    if c < 2:
        return 0
    w = identical3(x, l, c)
    xc2 = nCr(c, 2) # chose equal sides
    # now choose 2 parallel sides y and z, s.t y!= z, and y+2x != z
    l2c2 = 0
    s = []
    for i in range(len(l)):
        if l[i] == x:
            continue
        for j in range(i+1, len(l)):
            if l[j] == x or l[i] == l[j]:
                continue
            if not line(l[i], l[j], x):
                l2c2 += 1
                s.append([x,x,l[i],l[j]])
    # print 'identical(',x,') = ', xc2,'*', l2c2 
    # print list(set(tuple(row) for row in s))
    w += xc2 * l2c2
    return w

def num_isosceles():
    n = int(raw_input())
    l = [int(x) for x in raw_input().split()]
    ls = list(set(l))
    c = {}
    for each in ls:
        c[each] = 0
    for each in l:
        c[each] = c[each] + 1
    ways = 0
    for each in ls:
        ways += identical(each, l, c[each])
    return ways
    

T = int(raw_input())
for i in range(T):
    n = num_isosceles()
    print 'Case #'+str(i+1)+':', n

'''
Input:
5
5
2 3 3 4 3
4
1 5 3 1
4
2 2 3 3
4
999999998 999999999 999999999 1000000000
9
3 4 1 4 2 5 3 1 3

Output:
Case #1: 5
Case #2: 0
Case #3: 0
Case #4: 1
Case #5: 73
Q:
number of isosceles trapezoids. both pairs of sides cannot be parallel
'''