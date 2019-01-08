#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) printf("%d is even\n", a);
    else printf("%d is odd\n", a);
  }
  return 0;
}