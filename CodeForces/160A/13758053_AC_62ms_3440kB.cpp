#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, ans = 0, me = 0, n, sum = 0, k = 0;
  cin >> t;
  int a[t+1];
  for (int i = 0; i < t; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a, a+t);
  sum = sum / 2;
  while (me <= sum) {
    ++k;
    me += a[t-k];
  }
  cout << k << endl;
  return 0;
}