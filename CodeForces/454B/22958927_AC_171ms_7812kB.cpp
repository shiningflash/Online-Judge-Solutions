#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e6;

int main() {
	// freopen("in", "r", stdin);
	
	int n, m, a[mx+5], mx = INT_MIN, x;
	cin >> n;
	bool f = true;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < mx) f = false;
		if (a[i] >= mx && f) mx = a[i], x = i;
	}
	for (int i = n, j = 0; j <= x; j++, i++) a[i] = a[j];

	for (int i = x+1; i < n+x; i++) {
		if (a[i+1] < a[i]) {
			cout << -1 << endl;
			return 0;
		}
	}
	cout << (n-x-1) << endl;
	return 0;
}