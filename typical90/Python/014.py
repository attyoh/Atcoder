def main():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    a.sort()
    b.sort()
    
    ans = 0
    for x, y in zip(a,b):
        ans += abs(x-y)
    print(ans)

if __name__ == '__main__':
    main()