#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll ans, n, x, d, a[20];

void dfs(ll i, vector<ll> v) {
    if (i == n) {
        if (v.empty()) return;
        ll sum = 0, mx = -1, mn = INT_MAX;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }
        if (sum >= x && mx - mn <= d) ans++;
        return;
    }
    dfs(i+1, v);
    v.push_back(a[i]);
    dfs(i+1, v);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x >> d;
    for (int i = 0; i < n; i++) cin >> a[i];
    dfs(0, {});
    cout << ans << endl;
    return 0;
}
