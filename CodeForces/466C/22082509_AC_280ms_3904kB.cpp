#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n+5];
    a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], a[i] += a[i-1];
    ll sum = a[n], ans(0), cnt(0);
    if (sum % 3 == 0) {
        sum /= 3;
        for (int i = 1; i < n; i++) {
            if (a[i] == 2*sum) ans += cnt;
            if (a[i] == sum) cnt++;
        }
    }
    cout << ans << endl;
    return 0;
}