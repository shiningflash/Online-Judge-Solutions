#include <bits/stdc++.h>
#define CLEAR(x) memset(x, 0, sizeof(x))
using namespace std;

string line1, line2;
string s1[1005], s2[1005];
int dp[1005][1005], t(0);

void LCS_LENGTH(int l1, int l2) {
    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    if (dp[l1][l2] == 0) printf("%2d. Blank!\n", ++t);
    else printf("%2d. Length of longest match: %d\n", ++t, dp[l1][l2]);
}

int main() {
    while (getline(cin, line1)) {
        for (int i = 0; i < line1.size(); i++) {
            if (isalnum(line1[i])) continue;
            else line1[i] = ' ';
        }
        getline(cin, line2);
        for (int i = 0; i < line2.size(); i++) {
            if (isalnum(line2[i])) continue;
            else line2[i] = ' ';
        }
        stringstream ss1(line1);
        stringstream ss2(line2);
        int l1(0), l2(0);
        while (ss1 >> s1[l1]) l1++;
        while (ss2 >> s2[l2]) l2++;

        CLEAR(dp);
        LCS_LENGTH(l1, l2);
    }
}