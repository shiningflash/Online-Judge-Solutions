#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n, x1, y1, z1, x2, y2, z2;
    for (scanf("%d", &tst); tst--; ) {
        int xx1 = 0, yy1 = 0, zz1 = 0, xx2 = INT_MAX, yy2 = INT_MAX, zz2 = INT_MAX;
        for (scanf("%d", &n); n--; ) {
            scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
            xx1 = max(xx1, x1);
            yy1 = max(yy1, y1);
            zz1 = max(zz1, z1);
            xx2 = min(xx2, x2);
            yy2 = min(yy2, y2);
            zz2 = min(zz2, z2);
        }
        printf("Case %d: %d\n", ++t, ((xx2-xx1 > 0 && yy2-yy1 > 0 && zz2-zz1 > 0) ? ((xx2-xx1) * (yy2-yy1) * (zz2-zz1)) : 0));
    }
}