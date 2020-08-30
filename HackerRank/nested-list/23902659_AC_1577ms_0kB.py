student = []
mark = []

for i in range (0, int(input())):
  name = input()
  score = float(input())
  student.append([name, score])
  mark.append(score)

mn = min(mark)
while mn in mark:
  mark.remove(mn)
mn = min(mark)
student.sort()

for name, score in student:
  if (score == mn):
    print(name)