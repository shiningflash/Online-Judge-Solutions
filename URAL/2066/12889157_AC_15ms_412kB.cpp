#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;;
  cin >> a >> b >> c;

  static const int INF = 1 << 30;
  int p = INF;

  p = min(p, a+b+c);
  p = min(p, a+b-c);
  p = min(p, a+b*c);
  p = min(p, a-b+c);
  p = min(p, a-b-c);
  p = min(p, a-b*c);
  p = min(p, a*b+c);
  p = min(p, a*b-c);
  p = min(p, a*b*c);
  
  cout << p << endl;
  return 0;
}