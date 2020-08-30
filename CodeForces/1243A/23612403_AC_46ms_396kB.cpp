/*
    @author:     Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int mx = 1e5+4;
int a[mx];
 
int main() {
    //freopen("in", "r", stdin);
 
	int t, n;
	for (cin >> t; t--; ) {
		cin >> n;
		for (int i = 0; i < n; i++) cin >> a[i];
		int ans(0);
		for (int i = 1; i <= n; i++) {
			int tmp(0);
			for (int j = 0; j < n; j++) {
				if (a[j] >= i) tmp++;
			}
			if (tmp >= i) ans = i;
		}
		cout << ans << endl;
	}
}