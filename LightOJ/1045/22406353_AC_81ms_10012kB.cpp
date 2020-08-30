#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1000005;

double logn[mx];

void init() {
    logn[0] = 0;
    for (int i = 1; i < mx; i++) logn[i] = logn[i-1] + log(i);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    ll n, b, t, cas(0);
    init();
    for (scanf("%lld", &t); t--; ) {
        scanf("%lld %lld", &n, &b);
        ll ans = (ll) (logn[n] / log(b));
        printf("Case %lld: %lld\n", ++cas, ans+1);
    }
    return 0;
}
