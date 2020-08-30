#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define le 100005
 
ll a[le], x[le], y[le];
 
int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, q, c, l, r; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) x[i] = x[i-1] + a[i];
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) y[i] = y[i-1] + a[i];
    for (cin >> q; q--; ) {
        cin >> c >> l >> r;
        if (c == 1) cout << (x[r] - x[l-1]) << "\n";
        else cout << (y[r] - y[l-1]) << "\n";
    }
    return 0;
}