import time
import calendar
import fileinput
import math
#
# not accepted
#
for line in fileinput.input():
    t = int(line.strip())
    # original shit mentioned in question
    ti = t*4000000007
    ti = sqrt(ti)
    print ti
    m = time.strftime("%m",time.localtime(ti))
    month = calendar.month_abbr[int(m)]
    s = time.strftime(" %d %H:%M:%S %Y",time.localtime(ti))
    print month+s
    
    #m = time.strftime("%m",time.localtime(t))
    #month =calendar.month_abbr[int(m)]
    #s = time.strftime(" %d %H:%M:%S %Y",time.localtime(t))
    #print month+s