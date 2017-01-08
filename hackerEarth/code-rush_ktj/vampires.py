s = [1260,1395,1435,1530,1827,2187,6880,102510,104260,105210,105264,108135,110758,115672,116725,117067,118440,120600,123354,125248,125433,125460,125500,126027,126846,129640]

#
# experimental approach - s is a known set of vampire numbers
#
while 1:
    try:
        x = int(raw_input())
        if x in s:
            print "True"
        else:
            print "False"
    except EOFError:
        break