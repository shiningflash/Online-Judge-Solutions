#include <bits/stdc++.h>
using namespace std;
#define mx 505

int t, cas(0), n, m, u[mx][mx], r[mx][mx], dp[mx][mx];

int main() {
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &n, &m);

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                u[i][j] = r[i][j] = dp[i][j] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%d", &u[i][j]), u[i][j] += u[i][j-1];

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%d", &r[i][j]), r[i][j] += r[i-1][j];

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                dp[i][j] = max(dp[i-1][j] + u[i][j], dp[i][j-1] + r[i][j]);
        
        printf("Case %d: %d\n", ++cas, dp[n][m]);
    }
}