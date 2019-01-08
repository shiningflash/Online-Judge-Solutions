#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, cas = 0;
  while (1) {
    cin >> t;
    if (t == 0) break;
    int count = 0, num;
    cas++;
    for (int i = 0; i < t; i++) {
      cin >> num;
      if (num == 0) count++;
    }
    printf("Case %d: %d\n", cas, t - 2 * count);
  }
  return 0;
}
