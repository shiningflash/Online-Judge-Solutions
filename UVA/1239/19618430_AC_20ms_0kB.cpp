#include <bits/stdc++.h>
using namespace std;

string s;
int t(0), k, tst, dp[1005][1005];

void __dp(int len, int mx) {
    memset(dp, 0, sizeof(dp));
    for (int i = len; i >= 1; i--) {
        for (int j = i; j <= len; j++) {
            int needchange = (s[i-1] == s[j-1]) ? 0 : 1;
            dp[i][j] = dp[i+1][j-1] + needchange;
            if (dp[i][j] <= k) mx = max(mx, j-i+1);
        }
    }
    printf("%d\n", mx);
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        cin >> s >> k;
        __dp(s.length(), 0);
    }
}
