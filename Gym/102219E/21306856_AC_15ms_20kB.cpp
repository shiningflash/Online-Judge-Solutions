#include <bits/stdc++.h>
using namespace std;

int t, n, a[55], dp[55][55];

void __call() {
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= t; j++)
            dp[i][j] = (j >= a[i] && dp[i-1][j-a[i]] + a[i] > dp[i-1][j]) ? dp[i-1][j-a[i]] + a[i] : dp[i-1][j];
}

void __print() {
    for (int i = n, j = t; i; i--)
        if (j >= a[i] && dp[i][j] == dp[i-1][j-a[i]] + a[i])
            printf("%d ", a[i]), j -= a[i];
    printf("%d\n", dp[n][t]);
}

int main() {
    //freopen("in", "r", stdin);
    while (scanf("%d", &t) && t) {
        scanf("%d", &n);
        memset(dp, 0, sizeof(dp));
        for (int i = n; i > 0; i--) scanf("%d", &a[i]);
        __call();
        __print();
    }
    return 0;
}
