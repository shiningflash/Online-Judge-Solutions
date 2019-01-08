#include <bits/stdc++.h>
using namespace std;

int main() {
  int press, a, b;
  while (scanf("%d %d", &a, &b) == 2 && (a != -1 && b != -1)) {
    press = abs(a-b);
    if (press > 50) press = 100 - press;
    printf("%d\n", press);
  }
  return 0;
}