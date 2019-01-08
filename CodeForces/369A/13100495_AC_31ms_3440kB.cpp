#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, day = 0;
  cin >> n >> a >> b;
  int num, one  = 0, two = 0;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num == 1) one++;
    else if (num == 2) two++;
  }
  if (a <= one) {
    day += (one - a);
    a = 0;
  }
  else {
    a = a - one;
  }
  b += a;
  if (b <= two) {
    day += (two - b);
    b = 0;
  }
  else {
    b = b - two;
  }
  cout << day << endl;
}