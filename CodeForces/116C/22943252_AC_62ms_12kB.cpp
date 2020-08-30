#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e5;

int main() {
	// freopen("in", "r", stdin);
	
	int n, ans(1); cin >> n; int a[n+1];
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		int cnt = 1, j = i;
		while (a[j] != -1) j = a[j], cnt++;
		if (cnt > ans) ans = cnt;
	}
	cout << ans << endl;
}