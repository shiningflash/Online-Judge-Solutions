#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, a, b, c;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    scanf("%d %d %d", &a, &b, &c);
    printf("Case %d: ", i);
    if ((a > b && a < c) || (a > c && a < b))   printf("%d\n", a);
    else if ((b > a && b < c) || (b < a && b > c))   printf("%d\n", b);
    else   printf("%d\n", c);
  }
  return 0;
}