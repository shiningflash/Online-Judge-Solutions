#include <bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)

int main() {
    int n, cas(0);
    double r;
    for (cin >> n; n--; ) {
        cin >> r;
        printf("Case %d: %.2lf\n", ++cas, 4.0*r*r - PI*r*r);
    }
}
