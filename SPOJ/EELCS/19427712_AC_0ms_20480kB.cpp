#include <bits/stdc++.h>
#define CLEAR(x) memset(x, 0, sizeof(x))
using namespace std;

string s1, s2;
int dp[1005][1005], t(0);

void LCS_LENGTH(int l1, int l2) {
    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    printf("%d\n", dp[l1][l2]);
}

int main() {
    while ((getline(cin, s1))) {
        getline(cin, s2);
        CLEAR(dp);
        LCS_LENGTH(s1.size(), s2.size());
    }
}