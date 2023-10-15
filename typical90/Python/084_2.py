def main():
    n = int(input())
    s = input()

    ans = n*(1+n)//2
    cnt = 0
    for i in range(n):
        cnt += 1
        if i == n-1 or s[i] != s[i+1]:
            ans -= cnt*(1+cnt)//2
            cnt = 0
    print(ans)

if __name__ == '__main__':
    main()