import re

def split_and_join(line):
    return re.sub(' ', '-', line)

if __name__ == '__main__':
    str = input()
    print(split_and_join(str).strip())
