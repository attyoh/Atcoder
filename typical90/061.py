from collections import deque

def main():
    q = int(input())
    dq = deque()
    for _ in range(q):
        t, x = map(int, input().split())
        if (t==1): dq.appendleft(x)
        if (t==2): dq.append(x)
        if (t==3): print(dq[x-1])

if __name__ == '__main__':
    main()