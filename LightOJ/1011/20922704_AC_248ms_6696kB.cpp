#include <bits/stdc++.h>
using namespace std;

int N, a[18][18], dp[18][1<<16];

int Set(int n, int pos) { return n = (n | (1<<pos)); }
bool Check(int n, int pos) { return (bool) (n & (1<<pos)); }

int bitmask(int n, int pos) {
	if (pos == N || n == (1 << N) - 1) return 0;
	if (dp[pos][n] != -1) return dp[pos][n];
	int ret = 0;
	for (int i = 0; i < N; i++) {
		if (!Check(n, i)) ret = max(ret, a[pos][i] + bitmask(Set(n, i), pos+1)); 
	}
	return dp[pos][n] = ret;
}

int main() {
	int t, cas(0), x;
	for (scanf("%d", &t); t--; ) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) scanf("%d", &a[i][j]);
		memset(dp, -1, sizeof(dp));
		printf("Case %d: %d\n", ++cas, bitmask(0, 0));
	}
}