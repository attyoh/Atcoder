def prime_factors(n):
    factors = []
    i = 2
    while i*i <= n:
        while n%i == 0:
            factors.append(i)
            n //= i
        i += 1
    if n != 1:
        factors.append(n)
    return factors
        
def main():
    n = int(input())
    m = len(prime_factors(n))
    ans = 0
    while 1:
        if m <= (1<<ans):
            print(ans)
            break
        ans += 1

if __name__ == '__main__':
    main()