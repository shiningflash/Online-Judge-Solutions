#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int cost[1005][1005], t, l1, l2;

inline void LCS_LENGTH() {
    for (int i = 1; i <= l1; cost[i][0] = 0, i++);
    for (int j = 1; j <= l2; cost[0][j] = 0, j++);

    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (s1[i-1] == s2[j-1]) cost[i][j] = cost[i-1][j-1] + 1;
            else if (cost[i-1][j] >= cost[i][j-1]) cost[i][j] = cost[i-1][j];
            else cost[i][j] = cost[i][j-1];
        }
    }
    printf("%d\n", cost[l1][l2]);
}

int main() {
    //freopen("in", "r", stdin);
    cin >> s1 >> s2;
    l1 = s1.length();
    l2 = s2.length();
    LCS_LENGTH();
}
