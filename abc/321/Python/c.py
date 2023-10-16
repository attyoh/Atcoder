def main():
    k = int(input())
    
    ans = []
    for s in range(1<<10):
        x = 0
        for i in range(9,-1,-1):
            if s & (1<<i):
                x = x*10 + i
        if x == 0:
            continue
        ans.append(x)

    ans.sort()
    print(ans[k-1])

if __name__ == '__main__':
    main()