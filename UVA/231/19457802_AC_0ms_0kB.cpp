#include <bits/stdc++.h>
using namespace std;

int a[10005], dp[10005];

int main() {
    int cas(0), n;
    while (scanf("%d", &n) && n != -1) {
        dp[0] = 1;
        a[0] = n;
        int ans = 1, k = 1;
        while (scanf("%d", &n)) {
            if (n == -1) {
                if (cas > 0) puts("");
                printf("Test #%d:\n  maximum possible interceptions: %d\n", ++cas, ans);
                break;
            }
            a[k] = n;
            int t = 0;
            for (int i = 0; i < k; i++)
                if (a[i] >= a[k] && dp[i] > t)
                    t = dp[i];
            dp[k] = t+1;
            if (dp[k] > ans) ans = dp[k];
            k++;
        }
    }
}