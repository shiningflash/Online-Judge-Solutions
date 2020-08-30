#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(0), i, n, a[10010], f[10010];
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (i = 1; i <= n; i++) scanf("%d", &a[i]);
        memset(f, 0, sizeof(f));
        for (i = 1; i <= n; i++) {
            if (a[i] >= n) break;
            if (!f[a[i]+1]) f[a[i]+1] = 1;
            else if (!f[n-a[i]]) f[n-a[i]] = 1;
            else break;
        }
        printf("Case %d: %s\n", ++t, i > n ? "yes" : "no");
    }
}