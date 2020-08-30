#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(0), n, x, a[105], b[105];
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);
        sort(a, a+n);
        sort(b, b+n);
        int a1 = 0, b1 = 0, a2 = n-1, b2 = n-1, w = 0, d = 0;
        while (a1 <= a2) {
            if (a[a2] > b[b2]) a2--, b2--, w++;
            else if (a[a1] > b[b1]) a1++, b1++, w++;
            else if (a[a1] <= b[b1]) {
                if (a[a1] == b[b2]) d++;
                a1++, b2--;
            }
        }
        printf("Case %d: %d\n", ++t, w*2 + d);
    }
}