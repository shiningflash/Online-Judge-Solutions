#include <bits/stdc++.h>
using namespace std;
#define INF 100000

int main() {
    int t, n, x, y, xx, yy, a, b, c, d, e, f;
    for (scanf("%d", &t); t--; ) {
        x = y = -INF;
        xx = yy = INF;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
            if (c == 0) x = max(x, a);
            if (f == 0) y = max(y, b);
            if (e == 0) xx = min(xx, a);
            if (d == 0) yy = min(yy, b);
        }
        if (x <= xx && y <= yy) {
            int rx, ry;
            if (x == -INF) {
                rx = xx == INF ? 0 : xx;
            } else rx = x;
            if (y == -INF) {
                ry = yy == INF ? 0 : yy;
            } else ry = y;
            printf("1 %d %d\n", rx, ry);
        } else printf("0\n");
    }
}