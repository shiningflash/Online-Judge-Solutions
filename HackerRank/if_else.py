def check(n):
    return "Weird" if (n & 1 == 1 or (n & 1 == 0 and (n >= 6 and n <= 20))) else "Not Weird"

if __name__ == '__main__':
    n = int(input().strip())
    print(check(n))
