/*
    @author:     Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int mx = 1e5+4;
ll a[mx];
 
int main() {
    //freopen("in", "r", stdin);
 
	ll n, z = 0;
	cin >> n;
	for (ll i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			while (n % i == 0) n /= i;
			a[z++] = i;
		}
	}
	if (n > 1) a[z++] = n;
	cout << (z == 1 ? a[0] : 1) << endl;
	return 0;
}