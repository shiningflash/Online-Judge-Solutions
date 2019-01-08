#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, x;
  cin >> a >> b >> x;
  if (x == a || (x > a && x <= (a+b))) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}