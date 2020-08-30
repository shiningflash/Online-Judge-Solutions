#include <bits/stdc++.h>
using namespace std;

double ab, ac, bc, ad, ae, de, rr, abc, ade, bdec;

double triangle(double a, double b, double c) {
    double s = (a+b+c) / 2.0;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}

double bisection() {
    double lo = 0.0, hi = ab, mid, tmp_ratio;
    abc = triangle(ab, ac, bc);
    int cnt = 200;
    while (cnt--) {
        mid = (lo + hi) / 2.0;
        ad = mid;
        ae = (ad / ab) * ac;
        de = (ae / ac) * bc;

        ade = triangle(ad, de, ae);
        bdec = abc - ade;
        tmp_ratio = ade / bdec;

        ((tmp_ratio < rr) ? lo = mid : hi = mid);
    }
    return mid;
}

int main() {
    int t(0), tst; scanf("%d", &tst);
    while (tst--) scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &rr), printf("Case %d: %.8lf\n", ++t, bisection());
}