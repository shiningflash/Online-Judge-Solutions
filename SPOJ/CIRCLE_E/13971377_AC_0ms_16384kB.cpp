#include <bits/stdc++.h>
#define le 100002
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    double r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    // calculation
    double sum = r1 + r2 + r3;
    double mul = r1 * r2 * r3;
    double add = (r1 * r2) + (r2 * r3) + (r1 * r3);
    double den = add + (2 * sqrt(sum * mul));
    double small_radius = mul / den;

    printf("%.6lf\n", small_radius);
  }
  return 0;
}