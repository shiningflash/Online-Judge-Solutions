#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+5;

int a[mx], b[mx];

int main() {
    int n, dif, m, x, tot, ans[3];
    while (scanf("%d", &n) != EOF) {
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n; i++) scanf("%d", &a[i]), b[a[i]] = 1;
        scanf("%d", &tot);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            x = abs(tot - a[i]);
            if (b[x]) {
                dif = abs(a[i] - x);
                if (dif < mn) mn = dif, ans[0] = x, ans[1] = a[i];
            }
        }
        sort(ans, ans+2);
        printf("Peter should buy books whose prices are %d and %d.\n\n", ans[0], ans[1]);
    }

    return 0;
}
