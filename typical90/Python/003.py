from collections import deque

n = int(input())

g = [[] for _ in range(n)]
for _ in range(n-1):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    g[a].append(b)
    g[b].append(a)

def bfs(s):
    d = [None] * n
    d[s] = 0
    q = deque([s])
    while q:
        v = q.popleft()
        for u in g[v]:
            if d[u] is None:
                d[u] = d[v] + 1
                q.append(u)
    return d

max0 = bfs(0).index(max(bfs(0)))
print(max(bfs(max0))+1)