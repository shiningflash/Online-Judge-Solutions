#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int t, cas(0), n, k, a[1010], dp[1010][1010];
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &n, &k);
        for (int i = 2; i <= n+1; i++) scanf("%d", &a[i]);
        for (int i = 2; i <= n+1; i++) {
            for (int j = 0; j <= k; j++) {
                if (j == 0) dp[i][j] = 0;
                else if (a[i] <= j) dp[i][j] = max(a[i] + dp[i-2][j-a[i]], dp[i-1][j]);
                else dp[i][j] = dp[i-1][j];
            }
        }
        printf("Scenario #%d: %d\n", ++cas, dp[n+1][k]);
    }
    return 0;
}