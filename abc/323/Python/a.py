def main():
    s = input()
    for i in range(2,17,2):
        if s[i-1] != '0':
            return "No"
    return "Yes"

if __name__ == '__main__':
    print(main())