def is_vowel(c):
    return c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'

def minion_game(string):
    a = 0
    b = 0
    d = len(string)

    for i in range(d):
        if is_vowel(string[i]):
            b += (d - i)
        else:
            a += (d - i)

    if a > b:
        print('Stuart', a)
    elif b > a:
        print('Kevin', b)
    else:
        print('Draw')

if __name__ == '__main__':
    s = input()
    minion_game(s)
