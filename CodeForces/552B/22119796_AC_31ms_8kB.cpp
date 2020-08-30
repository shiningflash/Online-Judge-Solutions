#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, ans(0);
	cin >> n;
	for (ll i = 9; n > 0; i *= 10) {
		ans += n;
		n -= i;
	}
	cout << ans << "\n";
    return 0;
}