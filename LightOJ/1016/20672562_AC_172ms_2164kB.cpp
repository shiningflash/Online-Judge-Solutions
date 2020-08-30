#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(0), n, w, x, y[50010], ans, i, mm;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &w);
        for (i = 0; i < n; i++) scanf("%d %d", &x, &y[i]);
        sort(y, y+n);
        for (i = 0, ans = 0, mm = INT_MIN; i < n; i++) if (y[i] > mm) mm = y[i] + w, ans++;
        printf("Case %d: %d\n", ++t, ans);
    }
}