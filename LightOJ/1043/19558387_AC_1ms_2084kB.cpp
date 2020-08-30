#include <bits/stdc++.h>
using namespace std;

int main() {
    double ab, ac, bc, rr;
    int t(0), tst; scanf("%d", &tst);
    while (tst--) scanf("%lf %lf %lf %lf", &ab, &ac, &bc, &rr), printf("Case %d: %.8lf\n", ++t, ab * sqrt(rr / (rr+1)));
}