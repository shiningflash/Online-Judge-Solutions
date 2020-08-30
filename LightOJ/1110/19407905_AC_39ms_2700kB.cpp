#include <bits/stdc++.h>
using namespace std;

int t(0), tst;
string s1, s2;
string dp[105][105];

string min_str(string x, string y) {
    int n = x.size(), m = y.size();
    if (n == m) return ((x < y) ? x : y); 
    else return ((n > m) ? x : y);
}

void __dp() {
    int n = s1.size(), m = s2.size();
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) dp[i][j] = "";
            else if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + s1[i-1];
            else dp[i][j] = min_str(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << "Case " << ++t << ": ";
    cout << ((dp[n][m].size() == 0) ? ":(" : dp[n][m]) << "\n";
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        cin >> s1 >> s2;
        __dp();
    }
}