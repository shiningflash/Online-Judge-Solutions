#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int i, t;
    long double a, b;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%Lf", &a);
        long double pi = 2 * acos(0.0);
        b = (2.0*a)*(2.0*a) - (pi*a*a);
        printf("Case %d: %.2Lf\n", i, b);
    }
 
    return 0;
}