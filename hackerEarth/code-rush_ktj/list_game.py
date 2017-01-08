import fileinput

for line in fileinput.input():
    x = int(line.strip())
    
    d = 2
    s = 0
    while 1:
        while x%d == 0:
            s += 1
            x /= d
        d += 1
        if x < 2:
            print s
            break
    
    