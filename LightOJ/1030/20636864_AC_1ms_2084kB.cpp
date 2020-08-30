#include <bits/stdc++.h>
using namespace std;

int main() {
	int tst, t(0), n, m, a[105];
	double dp[105];
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
		for (int i = n; i >= 1; i--) {
			dp[i] = a[i];
			m = min(6, n-i);
			for (int j = 1; j <= m; j++) dp[i] += (1.0/m) * dp[i+j];
		}
		printf("Case %d: %.10lf\n", ++t, dp[1]);
	}
}