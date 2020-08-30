#include <bits/stdc++.h>
using namespace std;

int tst, t(0), l1, l2, x(0);
char s1[32], s2[32];
long long int dp[32][32], p[32][32][32], ans, ans1, ans2;

long long int lcs() {
    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[l1][l2];
}

long long int sol(int i, int j, int l) {
//    cout << s1[i] << " " << s2[j] << " " << i << " " << j << " " << l << endl;
    if (i == l1 || j == l2) return (l == ans);
    if (p[i][j][l] != -1) return p[i][j][l];
    if (s1[i] == s2[j]) return p[i][j][l] = sol(i+1, j+1, l+1);
    else return p[i][j][l] = sol(i+1, j, l) + sol(i, j+1, l);
}

int main() {
//    freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%s", s1);
        scanf("%s", s2);
        l1 = strlen(s1);
        l2 = strlen(s2);
        memset(dp, 0, sizeof(dp));
        memset(p, -1, sizeof(p));
        ans = lcs();
        ans1 = l1 + l2 - ans;
        ans2 = sol(0, 0, 0);
        printf("Case %d: %lld %lld\n", ++t, ans1, ans2);
    }    
}