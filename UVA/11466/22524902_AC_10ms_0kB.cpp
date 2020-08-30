#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll LPD(ll n) {
    ll x = 0, ans = -1;
    if (n % 2 == 0) x++, ans = 2;
    while (n % 2 == 0) n /= 2;
    for (ll i = 3; i*i <= n+1; i += 2) {
        if (n % i == 0) x++, ans = i;
        while (n % i == 0) n /= i;
    }
    if (n > 2) ans = n, x++;
    return (x > 1  ? ans : -1);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ll n, x;
    while (cin >> n && n) {
        if (n < 0) n = -n;
        cout << LPD(n) << endl;
    }
    return 0;
}
