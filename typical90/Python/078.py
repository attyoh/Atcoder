n, m = map(int, input().split())

to = [[] for _ in range(n)]
for _ in range(m):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    to[a].append(b)
    to[b].append(a)

ans = 0
for i in range(n):
    cnt = 0
    for t in to[i]:
        if (i > t):
            cnt += 1
    if (cnt == 1):
        ans += 1

print(ans)