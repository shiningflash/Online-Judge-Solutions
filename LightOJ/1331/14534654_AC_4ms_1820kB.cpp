#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  scanf("%d", &test);
  double r1, r2, r3, a, b, c, angle1, angle2, angle3, area, s;

  for (int i = 1; i <= test; i++) {
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    r1 = r1 * 1.0;
    r2 = r2 * 1.0;
    r3 = r3 * 1.0;

    a = r2 + r3;
    b = r1 + r3;
    c = r2 + r1;

    angle1 = acos((b * b + c * c - a * a) / (2 * b * c));
    angle2 = acos((c * c + a * a - b * b) / (2 * a * c));
    angle3 = acos((a * a + b * b - c * c) / (2 * a * b));

//    cout << angle1 << "  " << angle2 << "  " << angle3 << endl;

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

//    cout << "s " << s << "  area " << area << endl;

    double area1 = area - (.5 * ((r1 * r1 * angle1) + (r2 * r2 * angle2) + (r3 * r3 * angle3)));

    printf("Case %d: %.10lf\n", i, area1);
  }
  return 0;
}
