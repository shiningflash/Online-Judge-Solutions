#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    int n, q, x, t = 0, a[10005];
    while (scanf("%d %d", &n, &q) == 2 && n) {
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        printf("CASE# %d:\n", ++t);
        while (q--) {
            scanf("%d", &x);
            int p = lower_bound(a, a+n, x) - a;
            if (a[p] == x) printf("%d found at %d\n", x, p+1);
            else printf("%d not found\n", x);
        }
    }
}