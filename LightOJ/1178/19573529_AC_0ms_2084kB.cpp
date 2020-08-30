#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst;
    double a, b, c, d, s;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        if (a < c) { s = a; a = c; c = s; }
        s = (b+d+(a-c)) / 2.0;
        s = sqrt(s * (s-b) * (s-d) * (s-(a-c)));
        printf("Case %d: %.8lf\n", ++t, s + ((2.0*s / (a-c)) * c));
    }
}