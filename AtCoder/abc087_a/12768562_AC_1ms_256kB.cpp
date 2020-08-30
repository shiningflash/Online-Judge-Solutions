#include <bits/stdc++.h>
using namespace std;

int main () {
  int w, a, b;
  scanf("%d %d %d", &w, &a, &b);
  printf("%d\n", (w-a) % b);
  return 0;
}