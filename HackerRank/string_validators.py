def validate(s):
    x = False
    y = False
    z = False

    for c in s:
        if c >= '0' and c <= '9':
            x = True
        elif c >= 'a' and c <= 'z':
            y = True
        elif c >= 'A' and c <= 'Z':
            z = True
            
    print(x or y or z)
    print(y or z)
    print(x)
    print(y)
    print(z)

if __name__ == '__main__':
    s = input()
    validate(s)
