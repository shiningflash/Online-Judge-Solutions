#include <bits/stdc++.h>
using namespace std;

double a, b, c, d, tbase, s, x, y, AT, AR, Trapezium;

double AreaOfTwoTriangle_BothSide() {
    tbase = abs(a - c);
    s = (tbase + b + d) / 2.0;
    AT = sqrt(s * (s-tbase) * (s-b) * (s-d));
    return AT;
}

double AreaOfRectangle_Inside() {
    x = max(a,c) - tbase;
    y = (2.0 * AT) / tbase;
    return x * y;
}

int main() {
    int t(0), tst;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        Trapezium = AreaOfTwoTriangle_BothSide() + AreaOfRectangle_Inside();
        printf("Case %d: %.8lf\n", ++t, Trapezium);
    } 
}