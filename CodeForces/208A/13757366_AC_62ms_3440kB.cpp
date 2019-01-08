#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool flag = true;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
      i += 2;
      if (!flag)   cout << " ";
      continue;
    } else {
      flag = false;
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}