#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int p[n];
  for (int i = 0; i < n/2; i++) {
    cin >> p[i];
  }
  sort(p, p+(n/2));
  int k = 0, num1 = 0, num2 = 0, mini = 0;
  for (int i = 1; i <= n; i += 2) {
      num1 += abs(p[k++] - i);
  }
  k = 0;
  for (int i = 2; i <= n; i += 2) {
      num2 += abs(p[k++] - i);
  }
  mini = min(num1, num2);
  cout << mini << endl;
  return 0;
} 