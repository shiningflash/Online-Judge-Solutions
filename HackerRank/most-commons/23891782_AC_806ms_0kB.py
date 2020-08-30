s = input()
list = []

for i in range(97, 123):
  list.append(s.count(chr(i)))

for j in range(0, 3):
  mx = max(list)
  mx_idx = list.index(mx)
  print(chr(mx_idx + 97), mx)
  list[mx_idx] = 0