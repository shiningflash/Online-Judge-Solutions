#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long n;
  cin >> n;
  int k = 0, count = 0;
  while (n != 0) {
    k = n % 10;
    if (k == 4 || k == 7) count++;
    n /= 10;
  }
  if (count == 4 || count == 7) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}