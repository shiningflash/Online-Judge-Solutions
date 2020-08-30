#include <bits/stdc++.h>
using namespace std;

string a;
char b[110];
int len, dp[110][110];

int lcs() {
	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= len; i++) {
		for (int j = 1; j <= len; j++) {
			if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[len][len];
}

int main() {
	int n, t(0);
	for (cin >> n; n--; ) {
		cin >> a;
		len = a.size();
		for (int i = 0, j = len-1; i < len; i++, j--) b[i] = a[j];
		cout << "Case " << ++t << ": " << (len - lcs()) << endl;
	}
	return 0;
}