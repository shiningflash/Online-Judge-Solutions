#include <bits/stdc++.h>
using namespace std;

int dp[105][105], tst, t(0), len;
char s1[105], s2[105];

int lcs(char *ss1, char *ss2) {
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            if (ss1[i-1] == ss2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[len][len];
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%s", s1);
        len = strlen(s1);
        for (int i = 0, j = len-1; i < len; i++, j--) s2[i] = s1[j];
        printf("Case %d: %d\n", ++t, len-lcs(s1, s2));
    }    
}