// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
const int len = 2e5+5;
int a[len];
 
int main() {
    // freopen("in", "r", stdin);
 
	int t, n, x;
	for (cin >> t; t--; ) {
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> x, a[x] = i;
		int mn = INT_MAX, mx = -1;
		for (int i = 1; i <= n; i++) {
			if (mn > a[i]) mn = a[i];
			if (mx < a[i]) mx = a[i];
			if (mx - mn + 1 == i) cout << 1;
			else cout << 0;
		}
		cout << "\n";
	}
}
