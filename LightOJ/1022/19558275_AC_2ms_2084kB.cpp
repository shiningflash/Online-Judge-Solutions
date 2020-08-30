#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)

int main() {
    int tst, t(0);
    long double r;
    scanf("%d", &tst);
    while(tst--) scanf("%Lf", &r), printf("Case %d: %.2Lf\n", ++t, (4.0*r*r) - pi*1.0*r*r);
}