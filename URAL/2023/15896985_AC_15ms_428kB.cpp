#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> duck;
  duck['A'] = 1;
  duck['P'] = 1;
  duck['O'] = 1;
  duck['R'] = 1;
  duck['B'] = 2;
  duck['M'] = 2;
  duck['S'] = 2;
  duck['D'] = 3;
  duck['G'] = 3;
  duck['K'] = 3;
  duck['T'] = 3;
  duck['W'] = 3;
  duck['J'] = 3;

  int t, sum = 0, p = 1;
  string s;
  cin >> t;

  while(t--) {
    cin >> s;
    sum += abs(p - duck[s[0]]);
    p = duck[s[0]];
  }

  cout << sum << endl;
  return 0;
}