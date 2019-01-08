#include <bits/stdc++.h>
using namespace std;

int main () {
  string s;
  int cnt = 2, t;
  cin >> t;
  while (t--) {
    cin >> s; cnt++;
    int len = s.length();
    if (len > 3) {
      if (s[len-1] == 'e' && s[len-2] == 'n' && s[len-3] == 'o') {
        cnt++;
      }
    }
  }
  if (cnt == 13) cnt++;
  cout << cnt * 100 << endl;
}