def main():
    n = int(input())
    s = input()
    mod = 10**9+7

    st = "atcoder"
    dp = [0 for _ in range(8)]
    dp[0] = 1
    for i in s:
        for j in range(7):
            if i == st[j]:
                dp[j+1] += dp[j]
                dp[j+1] %= mod
    print(dp[7])

if __name__ == '__main__':
    main()