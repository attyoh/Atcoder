from bisect import bisect

def main():
    n, m, p = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    b.sort()
    s = [0]*(m+1)
    for i in range(m):
        s[i+1] = s[i]+b[i]

    ans = 0
    for i in a:
        j = bisect(b, p-i)
        ans += p*(m-j)
        ans += i*j
        ans += s[j]

    print(ans)

if __name__ == '__main__':
    main()
