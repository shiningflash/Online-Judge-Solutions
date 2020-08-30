#include <bits/stdc++.h>
using namespace std;

int tst, t(0), n, w, k, z, i, j, p, cnt, a[105], dp[105][105];

int maxDust() {
    memset(dp, 0, sizeof(dp));
    for (j = 1; j <= k; j++) {
        for (i = 1; i <= n; i++) {
            cnt = 0;
            dp[i][j] = dp[i-1][j];
            for (p = i; p; p--) {
                if (a[p] + w >= a[i]) cnt++;
                dp[i][j] = max(dp[p-1][j-1] + cnt, dp[i][j]);
            }
        }
    }
    return dp[n][k];
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d %d", &n, &w, &k);
        for (int i = 1; i <= n; i++) scanf("%d %d", &z, &a[i]);
        sort(a+1, a+n+1);
        printf("Case %d: %d\n", ++t, maxDust());
    }
}