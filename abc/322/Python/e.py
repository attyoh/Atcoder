def main():
    n, k, p = map(int, input().split())

    dp = {tuple([0]*k):0}
    for _ in range(n):
        c, *a = map(int, input().split())
        old = dp.copy()
        for _d, val in old.items():
            d = list(_d)
            for j in range(k):
                d[j] = min(d[j]+a[j], p)
            d = tuple(d)
            if d in dp:
                dp[d] = min(dp[d], val+c)
            else:
                dp[d] = val+c

    t = tuple([p]*k)
    print(dp[t] if t in dp else -1)

if __name__ == '__main__':
    main()