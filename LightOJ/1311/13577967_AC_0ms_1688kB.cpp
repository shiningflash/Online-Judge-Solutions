#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  double v1, v2, v3, a1, a2;
  scanf("%d", &test);
  for (int i = 1; i <= test; i++) {
    scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
    double t1 = v1 / a1;
    double t2 = v2 / a2;
    double t = max(t1, t2);
    double d = (v1 * v1) / (2 * a1) + (v2 * v2) / (2 * a2);
    printf("Case %d: %.8lf %.8lf\n", i, d, t * v3);
  }
  return 0;
}