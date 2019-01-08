#include <bits/stdc++.h>
using namespace std;

int func_abs(int n) {
  if (n < 0) return -n;
  else return n;
}

int main() {
  int p, n, sol = 0;
  cin >> n;
  string s;
  map <char, int> loc;
  loc['A'] = 1;
  loc['P'] = 1;
  loc['O'] = 1;
  loc['R'] = 1;
  loc['B'] = 2;
  loc['M'] = 2;
  loc['S'] = 2;
  loc['D'] = 3;
  loc['G'] = 3;
  loc['J'] = 3;
  loc['K'] = 3;
  loc['T'] = 3;
  loc['W'] = 3;
  p = 1;
  for (int i = 1; i <= n; ++i) {
    cin >> s;
    sol = sol + func_abs(p - loc[s[0]]);
    p = loc[s[0]];
  }
  cout << sol << endl;
  return 0;
}