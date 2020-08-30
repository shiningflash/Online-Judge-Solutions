#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    //freopen("in", "r", stdin);
    ll n;
    scanf("%lld", &n);
    n *= 2;
    ll a[n];
    for (ll i = 0; i < 2 * n; i++) scanf("%lld", &a[i]);
    sort(a, a+n);
    ll mx = INT_MIN, mn = INT_MAX;
    for (ll i = 0, j = n-1; i < n/2; i++, j--) {
        mx = max(mx, a[i] + a[j]);
        mn = min(mn, a[i] + a[j]);
    }
    printf("%lld\n", mx - mn);
}
