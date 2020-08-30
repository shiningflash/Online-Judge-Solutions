#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int q, n, x, k, m, a, b;
	for (cin >> q; q--; ) {
		cin >> n >> k;
		int mx = INT_MIN, mn = INT_MAX;
		while (n--) cin >> x, mx = max(mx, x), mn = min(mn, x);
		if (mx - mn > 2 * k) cout << -1 << "\n";
		else cout << mn + k << "\n";
	}
    return 0;
}