def main():
    n, m = map(int, input().split())
    s = input()
    t = input()

    if t.startswith(s) and t.endswith(s):
        return 0
    elif t.startswith(s) and not t.endswith(s):
        return 1
    elif t.endswith(s) and not t.startswith(s):
        return 2
    return 3

if __name__ == '__main__':
    print(main())