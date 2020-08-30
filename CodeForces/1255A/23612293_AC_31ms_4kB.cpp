#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int mx = 2e5;
 
int main() {
	// freopen("in", "r", stdin);
	
	ll n, a, b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		ll x = abs(a - b);
		if (x % 5 == 0) {
			cout << x / 5 << endl;
		}
		else {
			ll ans  = 0;
			ll p = x / 5;
			ll q = p * 5;
			ll r = (p+1) * 5;
			ll ret;
			if ((x - q) < (r - x)) {
				ans = p;
				ret = x - q;
			}
			else ans = p+1, ret = r - x;
 
			if (ret % 2 == 0) ans += (ret / 2);
			else {
				ans += (ret / 2) + 1;
			}
			cout << ans << endl;
		}
	}
}