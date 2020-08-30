#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(0), n, a[1000000];
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
        int mx = 0, k;
        a[0] = 0;
        for (int i = n; i > 0; i--) {
            k = abs(a[i] - a[i-1]);
            if (mx == k) mx++;
            else if (mx < k) mx = k;
        }
        printf("Case %d: %d\n", ++t, mx);
    }
}