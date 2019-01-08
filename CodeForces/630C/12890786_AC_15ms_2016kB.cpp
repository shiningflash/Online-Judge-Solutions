#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long int n, p = 0;;
  cin >> n;
  p = pow(2, ++n);
  cout << p-2 << endl;
  return 0;
}