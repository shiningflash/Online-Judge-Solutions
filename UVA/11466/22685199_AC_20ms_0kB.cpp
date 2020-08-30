#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll LPD(ll n) {
    ll x = 0, ans = -1;
    for (ll i = 2; i*i <= n+1; i++) {
        if (n % i == 0) x++, ans = i;
        while (n % i == 0) n /= i;
    }
    if (n > 2) ans = n, x++;
    return (x > 1  ? ans : -1);
}

int main() {
    ll n, x;
    while (cin >> n && n) {
    	if (n < 0) n = -n;
    	cout << LPD(n) << endl;
    }
    return 0;
}