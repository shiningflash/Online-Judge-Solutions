#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n, a[1005], x, val, rr;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &x, &n);
        memset(a, 0, sizeof(a));
        long long int ans(0);
        while (n--) {
            scanf("%d", &val);
            rr = x - val;
            if (rr >= 0 && rr <= 1000) ans += (long long int) a[rr];
            a[val]++;
        }
        printf("%d. %lld\n", ++t, ans);
    }
    return 0;
}