#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 3005

int main() {
    int n; scanf("%d", &n);
    ll ans = LLONG_MAX;

    ll a[mx], b[mx];
    for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    for (int i = 1; i <= n; i++) scanf("%lld", &b[i]);
    
    for (int i = 2; i < n; i++) {
        ll x = LLONG_MAX, y = LLONG_MAX;
        for (int j = 1; j < i; j++) {
            if (a[j] < a[i]) x = min(x, b[j]);
        }
        for (int j = i+1; j <= n; j++) {
            if (a[j] > a[i]) y = min(y, b[j]);
        }
        if (x != LLONG_MAX && y != LLONG_MAX) ans = min(ans, x + y + b[i]);
    }
    if (ans == LLONG_MAX) printf("-1\n");
    else printf("%lld\n", ans);
    return 0;
}