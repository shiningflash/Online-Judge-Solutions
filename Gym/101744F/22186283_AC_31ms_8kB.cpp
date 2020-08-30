#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll max(ll a, ll b) {
    return (a > b ? a : b);
}

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    ll x = ceil(n * .7);
    ll y = n - m + k;
    if (y < x) cout << -1 << "\n";
    else cout << max(x - k, 0) << "\n";
    cout << (ll) ((y * 100.0) / (n * 1.0)) << "\n";
    return 0;
}