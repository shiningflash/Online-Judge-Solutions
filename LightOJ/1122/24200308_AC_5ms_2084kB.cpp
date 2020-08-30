#include <bits/stdc++.h>
using namespace std;

const int mx = 15;
int a[15], dp[15][15];

int DigitCount(int n, int m, int i) {
	if (m == 1) return 1;
	if (dp[m][i] != -1) return dp[m][i];
	else {
		int tot = 0;
		for (int j = 1; j <= n; j++) {
			if (abs(a[i] - a[j]) <= 2) tot += DigitCount(n, m-1, j);
		}
		return dp[m][i] = tot;
	}
}

int main() {
	int t(0), q, n, m;
	for (cin >> q; q--; ) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) cin >> a[i];
		int tot = 0;
		memset(dp, -1, sizeof(dp));
		for (int i = 1; i <= n; i++) tot += DigitCount(n, m, i);
		cout << "Case " << ++t << ": " << tot << endl;
	}
	return 0;
}