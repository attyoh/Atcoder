a, b, c = map(int, input().split())

x = 1
for i in range(b):
    x *= c
print("Yes" if a < x else "No")
