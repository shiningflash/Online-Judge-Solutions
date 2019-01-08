#include <bits/stdc++.h>
using namespace std;

int main () {
  unsigned long long t, a, b;
  scanf("%llu", &t);
  while(t--) {
    scanf("%llu %llu", &a, &b);
    printf("%llu\n", a*b);
  }
  return 0;
}