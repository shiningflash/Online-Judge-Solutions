#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  double ans;
  if (a == b) ans = 1;
  else {
    double s = a / b * 1.0;
    double z = c / d * 1.0;
    double rev = s + z - (s * z);
    ans = s / rev;
  }
  printf("%.12f\n", ans);
  return 0;
}