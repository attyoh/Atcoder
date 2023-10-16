def main():
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.append(0)
    
    while a[-1] <= 100:
        b = a.copy()
        b.sort()
        all = 0
        for i in range(1,n-1):
            all += b[i]
        if all >= x:
            return a[-1]
        a[-1] += 1
    return -1

if __name__ == '__main__':
    print(main())