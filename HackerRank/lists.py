if __name__ == '__main__':
    N = int(input())
    lists = []
    for _ in range(N):
        p = input().split()
        if p[0] == 'insert':
            lists.insert(int(p[1]), int(p[2]))
        elif p[0] == 'print':
            print(lists)
        elif p[0] == 'remove':
            lists.remove(int(p[1]))
        elif p[0] == 'append':
            lists.append(int(p[1]))
        elif p[0] == 'sort':
            lists.sort()
        elif p[0] == 'pop':
            lists.pop()
        elif p[0] == 'reverse':
            lists.reverse()
