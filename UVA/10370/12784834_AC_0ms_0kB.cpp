#include <bits/stdc++.h>
using namespace std;

int main() {
  int test, c, kk;
  cin >> test;
  while(test--) {
    cin >> c;
    int ara[c];
    int i = 0, cas = 0, sum = 0;
    while (c--) {
      cin >> kk;
      ara[i++] = kk;
      sum += kk;
    }
//    cout << sum << " sum\n";
    int avg = sum / i;
//    cout << avg << " avg\n";
    for (int j = 0; j < i; j++) {
      if (ara[j] > avg) cas++;
    }
//    cout << cas << " cas\n";
    double ans = (cas * 1.0) / i;
    printf("%.3f%\n", ans * 100.0);
  }
}