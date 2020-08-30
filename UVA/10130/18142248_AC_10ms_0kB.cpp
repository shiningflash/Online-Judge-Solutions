#include <bits/stdc++.h>
using namespace std;

int p[1010];
int w[1010];
int dp[100][1010];
int t, n, g, q;

void knapsack() {
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 50; j++) {
            if (j < w[i]) dp[j][i] = dp[j][i-1];
            else dp[j][i] = max(dp[j][i-1], dp[j-w[i]][i-1] + p[i]);
        }
    }
//    for (int i = 0; i <= n; i++) {
//    	for (int j = 0; j <= 40; j++) {
//    		printf("%d ", dp[i][j]);
//    	}
//    	printf("\n");
//    }
}

int main() {
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d %d", &p[i], &w[i]);
        }
        knapsack();
        int sum = 0;
        for (scanf("%d", &g); g--; ) {
            scanf("%d", &q);
            sum += dp[q][n];
//            cout << n << "  " << q << endl;
        }
        printf("%d\n", sum);
    }
    return 0;
}