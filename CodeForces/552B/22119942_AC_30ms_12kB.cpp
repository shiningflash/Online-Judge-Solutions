#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    ll n, ans(0);
	cin >> n;
	for (ll i = 9; n > 0; ans += n, n -= i, i *= 10);
	cout << ans << "\n";
    return 0;
}