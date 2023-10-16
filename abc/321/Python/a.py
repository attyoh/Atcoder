def main():
    n = input()
    for i in range(len(n)-1):
        if (n[i] <= n[i+1]):
            return "No"
    return "Yes"

if __name__ == '__main__':
    print(main())