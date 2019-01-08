#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  n = n * 2;
  int i, flag, t, r, k;
  flag = 0;
  for (i = 1; i * i <= n; i++) {
      t = (i * (i + 1));
      r = n - t;
      k = sqrt(r);
      t = (k * (k + 1));
      if (t == r && k > 0) {
          cout << "YES\n";
          return 0;
      }
  }
  cout << "NO\n";
  return 0;
}