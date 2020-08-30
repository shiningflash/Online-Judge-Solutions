#include <bits/stdc++.h>
using namespace std;

int a[100005], t(0), tst, n, m, u, v;

int main() {
//    freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &m);
        int low = 0, high = 0, mid;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            low = max(low, a[i]);
            high += a[i];
        }
        while (low < high) {
            mid = (low + high) >> 1;
            int cnt = 1, w = 0;
            for (int i = 0; i < n; i++) {
                if (w + a[i] <= mid) w += a[i];
                else cnt++, w = a[i];
            }
            if (cnt <= m) high = mid;
            else low = mid + 1;
        }
        printf("Case %d: %d\n", ++t, low);
    }
}