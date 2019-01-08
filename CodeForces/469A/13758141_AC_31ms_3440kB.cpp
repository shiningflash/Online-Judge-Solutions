#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, x, y, n;
  cin >> t;
  bool flag = true;
  int ara[t+1];
  memset(ara, 0, sizeof(ara));
  cin >> x;
  for (int i = 0; i < x; i++) {
    cin >> n;
    ara[n]++;
  }
  cin >> y;
  for (int i = 0; i < y; i++) {
    cin >> n;
    ara[n]++;
  }
  for (int i = 1; i <= t; i++) {
    if (ara[i] == 0) {
      flag = false; break;
    }
  }
  if (flag) cout << "I become the guy." << endl;
  else cout << "Oh, my keyboard!"  << endl;
  return 0;
}