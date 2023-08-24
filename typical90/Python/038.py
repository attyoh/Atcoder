import math

def lcm(a,b):
    return a*b // math.gcd(a,b)

a, b = map(int, input().split())
l = 1000000000000000000
ans = lcm(a,b)

print("Large" if l < ans else ans)