#include <stdio.h>
#include <math.h>
int main() {
  int i, t, r1, r2, h, p;
  double r3, r4, x, v;
  scanf ("%d", &t);
  for (i = 1; i <= t; i++) {
    scanf("%d %d %d %d", &r1, &r2, &h, &p);
    double x = 1.0 * p / h;
    double r3 = r2 + (r1 - r2) * x * 1.0;
    double r4 = r3 * r3 + r3 * r2 + r2 * r2;
    double pi = 3.14159265358979323846;
    double v = (pi * p * r4) / 3.0;
    printf("Case %d: %.9lf\n", i, v);
  }
  return 0;
}