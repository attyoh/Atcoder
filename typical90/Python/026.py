import sys
sys.setrecursionlimit(10 ** 9)

def dfs(pos, cor):
    color[pos] = cor
    for n_pos in G[pos]:
        if (color[n_pos] >= 1):
            continue
        dfs(n_pos, 3-cor)

n = int(input())

G = [[] for _ in range(n+1)]
for _ in range(n-1):
    a, b = map(int, input().split())
    G[a].append(b)
    G[b].append(a)

color = [0] * (n+1)
dfs(1,1)

one = list(filter(lambda i: color[i]%2==0, range(1,len(color))))
two = list(filter(lambda i: color[i]%2==1, range(1,len(color))))

print(*one[:n//2]) if len(one) > len(two) else print(*two[:n//2])