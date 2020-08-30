#include <bits/stdc++.h>
using namespace std;
#define mx 1005

int t, cas(0), n, dp[mx];
bool p[mx][mx];
char s[mx];

int noOfSubstr() {
    for (int i = 0; i <= n; i++) {
        dp[i] = 999999;
        for (int j = 0; j <= n; j++) p[i][j] = 0;
        p[i][i] = 1;
    }
    for (int i = 1; i < n-1; i++) { // odd length
        int l = i - 1, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) p[l--][r++] = 1;
    }
    for (int i = 0; i < n-1; i++) { // even length
        int l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) p[l--][r++] = 1;
    }
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (p[j-1][i-1]) dp[i] = min(dp[i], dp[j-1] + 1); 
        }
    }
    return dp[n];
}

int main() {
    for (scanf("%d", &t); t--; ) {
        scanf("%s", s);
        n = strlen(s);
        int ans = noOfSubstr();
        printf("Case %d: %d\n", ++cas, ans);
    }
}