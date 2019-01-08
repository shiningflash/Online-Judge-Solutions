#include <stdio.h>
int main () {
  unsigned long long a, b;
  scanf("%llu %llu", &a, &b);
  int x = a / b;
  if (a < b) {
    printf("-1\n");
  }
  else {
    if (x % 2 == 1) {
      x++;
    }
    double res = ((a+b) * 1.0) / (double) x;
    printf("%.12lf\n", res);
  }
  return 0;
}