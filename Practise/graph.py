from collections import defaultdict

class Graph:
    def __init__(self, n):
        self.graph = defaultdict(list)
        self.d = [0]*n
        self.n = n
        
    def addEdge(self, u, v):
        self.graph[u].append(v)
    
    def update(self, s, discount):
        visited = [False]*(self.n)   
        q = []
        q.append(s)
        visited[s] = True
        
        while q:
            s = q.pop(0)
            self.d[s] = discount
            
            for i in self.graph[s]:
                if visited[i] == False:
                    q.append(i)
                    visited[i] = True
        
N = int(raw_input())
g = Graph(N)

for i in range(N-1):
    a = [int(x) for x in raw_input().strip().split()]
    g.addEdge(a[0]-1, a[1]-1)

m = int(raw_input())
for i in range(m):
    x = raw_input().strip().split()
    if (x[0]=='Q'):
        print g.d[int(x[1])-1]
    else:
        # assume, node discount
        g.update(int(x[1])-1, int(x[2]))


''' Input: Intuit test code
18
1 2
1 3
1 4
1 5
2 6
2 7
3 8
3 9
4 10
5 11
5 12
6 18
7 14
7 15
7 16
11 17
12 18
5
Q 15
U 7 5
Q 15
U 3 10
Q 7
'''