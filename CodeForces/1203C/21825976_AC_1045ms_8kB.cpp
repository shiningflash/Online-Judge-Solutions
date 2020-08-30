#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll find_divisor(ll n) {
    ll cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) cnt++;
            else cnt += 2;
        }
    }
    return cnt;
}

int main() {
    //freopen("in", "r", stdin);
    ll n, m, gcd;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> m;
        if (i == 1) gcd = m;
        else gcd = __gcd(gcd, m);
    }
    cout << find_divisor(gcd) << endl;
}