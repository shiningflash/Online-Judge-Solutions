#include<bits/stdc++.h>
using namespace std;
#define mx 10005

int dp[mx][12];

void init() {
    for (int i = 1; i < mx; i++) {
        for (int j = 0; j < 10; j++) dp[i][j] = dp[i-1][j];
        int n = i;
        while (n) dp[i][n % 10]++, n /= 10;
    }
}

int main() {
	int t, n;
    init();
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        printf("%d", dp[n][0]);
        for (int i = 1; i < 10; i++) printf(" %d", dp[n][i]);
        printf("\n");
    }
	return 0;
}
