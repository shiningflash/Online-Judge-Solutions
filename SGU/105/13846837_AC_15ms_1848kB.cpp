#include <bits/stdc++.h>
using namespace std;

long long int n;

int main() {
  cin >> n;
  
  if(n % 3 == 0) {
    printf("%d\n", n - (n / 3));
  }
  
  else {
    printf("%d\n", n - (n / 3) -1);
  }
  return 0;
}