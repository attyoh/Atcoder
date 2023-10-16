def main():
    n = int(input())
    s = input()
    print(s.find("ABC")+1 if "ABC" in s else -1)

if __name__ == '__main__':
    main()