import fileinput

for line in fileinput.input():
	# print line.strip().split()
	l = line.strip().split()
   
	if (len(l[0]) < len(l[1])):
		print "no"
	else:
		print "go"