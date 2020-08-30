#include <bits/stdc++.h>
#define CLEAR(x) memset(x, 0, sizeof(x))
using namespace std;

string s1[105], s2[105];
int dp[105][105], path[105][105];
int l1(0), l2(0);

void PRINT_PATH(int i, int j) {
    if (i == 0 || j == 0) return;
    if (path[i][j]) {
        PRINT_PATH(i-1, j-1);
        cout << s1[i-1];
        if (dp[i][j] != dp[l1][l2]) cout << " ";
    }
    else if (dp[i][j] == dp[i-1][j]) PRINT_PATH(i-1, j);
    else PRINT_PATH(i, j-1);
}

void LCS_LENGTH() {
    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                path[i][j] = 1;
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    PRINT_PATH(l1, l2);
}

int main() {
    while (cin >> s1[l1++]) {
        while (cin >> s1[l1] && s1[l1] != "#") l1++;
        while (cin >> s2[l2] && s2[l2] != "#") l2++;
        CLEAR(dp);
        CLEAR(path);
        LCS_LENGTH();
        cout << "\n";
        l1 = 0;
        l2 = 0;
    }
}