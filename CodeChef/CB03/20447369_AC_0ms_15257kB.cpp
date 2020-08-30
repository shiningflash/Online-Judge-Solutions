#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[55][55];

void countPC(string s, int n) {
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++) dp[i][i] = 1;
    for (int cell = 2; cell <= n; cell++) {
        for (int i = 0; i < n; i++) {
            int j = i+cell-1;
            if (s[i] == s[j]) dp[i][j] = dp[i+1][j] + dp[i][j-1] + 1;
            else dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
        }
    }
    printf("%lld\n", dp[0][n-1]);
}

int main() {
    int t; cin >> t;
    char s[55];
    while (t--) {
        cin >> s;
        countPC(s, strlen(s));
    }
}