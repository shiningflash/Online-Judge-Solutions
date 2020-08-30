#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main() {
    int tst, t = 1, n;
    double R, aa;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%lf %d", &R, &n);
        aa = sin(pi/n) * 1.0;
        printf("Case %d: %.10lf\n", t++, (R*aa) / (1+aa));
    }
}