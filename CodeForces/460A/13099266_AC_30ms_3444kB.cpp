#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, divide, mode;
  cin >> n >> m;
  int day = n;
  while(n >= m) {
    divide = n / m;
    mode = n % m;
    day += divide;
    n = divide + mode;
  } 
  cout << day << endl;
  return 0;
}