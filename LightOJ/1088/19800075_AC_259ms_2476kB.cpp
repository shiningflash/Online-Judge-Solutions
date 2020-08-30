#include <bits/stdc++.h>
using namespace std;

int a[100005], t(0), tst, n, q, u, v, x, y;

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &q);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        printf("Case %d:\n", ++t);
        while (q--) {
            scanf("%d %d", &u, &v);
            printf("%d\n", (upper_bound(a, a+n, v) - lower_bound(a, a+n, u)));
        }
    }
}