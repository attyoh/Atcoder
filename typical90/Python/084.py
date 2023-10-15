def main():
    s = input()

    n = len(s)
    a = [0]*(n+1)
    b = [0]*(n+1)

    ans = 0
    for i in range(n):
        if s[i]=='o':
            a[i+1] = i+1
            b[i+1] = b[i]
        else:
            b[i+1] = i+1
            a[i+1] = a[i]
        ans += min(a[i+1], b[i+1])
    print(ans)

if __name__ == '__main__':
    main()