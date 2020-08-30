n, k = map(int, input().split())
a = []
for i in range(1, k+5):
  a.append(0)
for i in range(0, n):
  x = int(input())
  a[x] = a[x] + 1
m = 0
for i in range(1, k+1):
  if (a[i] % 2 == 1):
    m = m + 1
print(int(n - (m >> 1)))