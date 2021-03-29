def wrap(string, max_width):
    ans = ""
    for i in range(1, len(string)+1):
        ans += string[i-1]
        if i % max_width == 0:
            ans += '\n'
    return ans

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
