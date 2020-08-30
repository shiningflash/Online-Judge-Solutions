#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst;
    double a, b, c, d;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        double x = abs(a-c);
        double s = (b+d+x) / 2.0;
        s = sqrt(s * (s-b) * (s-d) * (s-x));
        printf("Case %d: %.8lf\n", ++t, s + ((2.0*s / x) * min(a,c)));
    }
}