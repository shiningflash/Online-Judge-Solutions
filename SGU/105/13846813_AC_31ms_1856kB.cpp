#include <bits/stdc++.h>
using namespace std;

long long int di, n;

int main() {
  while(scanf("%lld", &n) != EOF) {
    
    di = 0;
    
    if(n % 3 == 0) {
      di = n / 3;
      n = n - di;
      cout << n << endl;
    }
    
    else {
      di = n / 3;
      n = n - di;
      cout << n-1 << endl;
    }
  }
  return 0;
}