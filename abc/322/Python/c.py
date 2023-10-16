def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))

    f = [False] * (n+1)
    for i in range(m):
        f[a[i]-1] = True
    
    ans = [0] * n
    for i in range(n-1, -1, -1):
        if not f[i]:
            ans[i] = ans[i+1] + 1

    print(*ans, sep='\n')

if __name__ == '__main__':
    main()