/*
    @author : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    //freopen("in", "r", stdin);

	ll t, n, a, b;
	for (cin >> t; t--; ) {
		cin >> n >> a >> b;
		ll x = min(a, b);
		if (a > x) x = x + x + 1;
		else x = x + x;
		if (x >= n) cout << "YES\n";
		else cout << "NO\n";
	}
    return 0;
}