#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll lcm (ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

int main() {
//    freopen("in", "r", stdin);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll rrbb = n / lcm(a, b);
    ll red = (n / a) - rrbb;
    ll blue = (n / b) - rrbb;
//    cout << rrbb << " " << red << " " << blue << endl;
    ll ans = red * p + blue * q;
    ans += ((p > q) ? rrbb * p : rrbb * q);
    cout << ans << "\n";
}