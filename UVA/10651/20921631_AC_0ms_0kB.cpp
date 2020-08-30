#include <bits/stdc++.h>
using namespace std;
 
int dp[1 << 14];
 
int Set(int n, int pos) { return n = n | (1 << pos); }
int Reset(int n, int pos) { return n = n & ~(1 << pos); }
int Check(int n, int pos) { return (bool) (n & (1 << pos)); }
 
int Call(int n, int cnt) {
	if (dp[n] != -1) return dp[n];
	int mn = cnt;
	for (int i = 0; i < 12; i++) {
		if (mn == 0) break;
		if (Check(n, i)) {
			if ( i >= 2) {
				if (Check(n, i-1) == 1 && Check(n, i-2) == 0) {
					int j = Reset(n, i-1);
					j = Reset(j, i);
					j = Set(j, i-2);
					mn = min(mn, Call(j, cnt-1));
				}
			}
			if (i <= 9) {
				if (Check(n, i+1) == 1 && Check(n, i+2) == 0) {
					int j = Reset(n, i+1);
					j = Reset(j, i);
					j = Set(j, i+2);
					mn = min(mn, Call(j, cnt-1));
				}
			}
		}
	}
	return dp[n] = mn;
}
 
int main() {
	int t; char s[14];
	for (scanf("%d", &t); t--; ) {
		memset(dp, -1, sizeof(dp));
		scanf("%s", s);
		int n(0), cnt(0);
		for (int i = 11; i >= 0; i--) {
			if (s[i] == 'o') n = Set(n, i), cnt++;
		}
		int ret = Call(n, cnt);
		printf("%d\n", ret);
	}
}