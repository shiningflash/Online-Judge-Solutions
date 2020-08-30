#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(1), n, p, q, w, i;
    for (scanf("%d", &tst); tst--; ) {
        int cnt(0), sum(0);
        scanf("%d %d %d", &n, &p, &q);
        for (i = 1; i <= n; i++) {
            scanf("%d", &w);
            sum += w;
            if (i <= p && sum <= q) cnt++;
        }
        printf("Case %d: %d\n", t++, cnt);
    }
}
