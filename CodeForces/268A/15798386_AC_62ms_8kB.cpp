#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, count = 0, i = 0, j = 0;
  cin >> n;
  int a[n], b[n];
  memset(a, 0, n);
  memset(b, 0, n);
  for (i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (a[i] == b[j]) {
        count++;
//        cout << a[i] << "  " << b[j] << endl;
      }
    }
    if (i == j) {
      if (a[i] == a[j]) count--;
    }
  }
  cout << count << endl;
  return 0;
}