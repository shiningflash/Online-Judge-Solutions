#include <bits/stdc++.h>
using namespace std;

int dp[85][85], t(0), l1, l2;
string s1, s2;

int __dp() {
	dp[0][0] = 0;
    for (int i = 0; i <= l1; i++) {
        for (int j = 0; j <= l2; j++) {
            if (i == 0) dp[i][j] = j;
            else if (j == 0) dp[i][j] = i;
            else if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
        }
    }
    return dp[l1][l2];
}

void backtracking() {
    int i = l1, j = l2, k = 1;
    while (i > 0 || j > 0) {
        if (s1[i-1] == s2[j-1]) {
        	i--;
        	j--;
        }
        else if (i > 0 && dp[i][j] - 1 == dp[i-1][j]) {
            printf("%d Delete %d\n", k++, i);
            s1.erase(i-1, 1);
            i--;
        }
        else if (j > 0 && dp[i][j] - 1 == dp[i][j-1]) {
            printf("%d Insert %d,%c\n", k++, i+1, s2[j-1]);
            s1.insert(i, 1, s2[j-1]);
            j--;
        }
        else if (i > 0 && j > 0) {
            printf("%d Replace %d,%c\n", k++, i, s2[j-1]);
            s1[i-1] = s2[j-1];
            i--; j--;
        }
    }
}

int main() {
    while (getline(cin, s1)) {
        getline(cin, s2);
        l1 = s1.size();
        l2 = s2.size();
        int ans = __dp();
        if (t == 1) puts("");
        printf("%d\n", ans);
        backtracking();
         t = 1;
    }
}