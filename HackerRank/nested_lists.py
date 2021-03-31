def nested(name, score):
    ans = []
    mn = min(score)
    for i in range(len(score)):
        if score[i] == mn:
            score[i] = 100.0
    mn = min(score)
    for i in range(len(score)):
        if score[i] == mn:
            ans.append(name[i])
    ans.sort()
    _ = [print(a) for a in ans]

if __name__ == '__main__':
    name = []
    score = []
    for _ in range(int(input())):
        name.append(input())
        score.append(float(input()))
    nested(name, score)
