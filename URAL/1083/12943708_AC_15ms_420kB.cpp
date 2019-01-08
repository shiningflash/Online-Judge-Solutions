#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, d; char ch; string s;
  unsigned long long ans = 1;
  cin >> a >> ch >> s;
  d = s.size() + 1;
  while (a > 0) {
    ans = ans * a;
    a -= d;
//    cout << a << endl;;
//    cout << ans << endl;
  }
  cout << ans << endl;
}