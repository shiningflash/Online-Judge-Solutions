#include <bits/stdc++.h>
using namespace std;

int main() {
  int ma = 0, a, b, c;
  cin >> a >> b >> c;
  
  ma = max(ma, a*b+c);
  ma = max(ma, a+b*c);
  ma = max(ma, a*(b+c));
  ma = max(ma, (a+b)*c);
  ma = max(ma, a+b+c);
  ma = max(ma, a*b*c);
  
  cout << ma << endl;
  return 0;
}