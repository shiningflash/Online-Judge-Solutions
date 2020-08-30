#include <bits/stdc++.h>
using namespace std;

int budget, party, price[105], fun[105], dp[105][505];

int knapsack() {
    for (int i = 0; i <= party; i++) {
        for (int j = 0; j <= budget; j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (price[i-1] <= j) dp[i][j] = max(fun[i-1] + dp[i-1][j-price[i-1]], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[party][budget];
}

int backtrack() {
    int ans = -1;
    for (int i = 1; i <= budget; i++) {
        if (dp[party][i] == dp[party][budget]) {
            return i;
        }
    }
    return ans;
}

int main() {
    //freopen("in", "r", stdin);
    while (scanf("%d %d", &budget, &party) && (budget + party)) {
        for (int i = 0; i < party; i++) scanf("%d %d", &price[i], &fun[i]);
        printf("%d %d\n", backtrack(), knapsack());
    }
    return 0;
}