#include <bits/stdc++.h>
#include <regex>
using namespace std;

int t(0), tst, n;
vector <int> rr;
int a[202][202], dp[202][202];

int banana_dp(int i, int j) {
    if (j < 1 || j > rr[i]) return 0;
    if (i == 2*n-1) return a[i][j];
    if (dp[i][j] != -1) return dp[i][j];
    if (i < n) return dp[i][j] = max(banana_dp(i+1, j), banana_dp(i+1, j+1)) + a[i][j];
    else return dp[i][j] = max(banana_dp(i+1, j), banana_dp(i+1, j-1)) + a[i][j]; 
}

int main() {
//    freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        rr.clear();
        memset(a, 0, sizeof(a));
        rr.push_back(0);

        for (int i = 1; i <= n; i++) {
            rr.push_back(i);
            for (int j = 1; j <= i; j++)
                scanf("%d", &a[i][j]);
        }

        for (int i = n+1; i < 2*n; i++) {
            rr.push_back(2*n-i);
            for (int j = 1; j <= 2*n-i; j++)
                scanf("%d", &a[i][j]);
        }
        
        memset(dp, -1, sizeof(dp));
        printf("Case %d: %d\n", ++t, banana_dp(1, 1));
    }
}