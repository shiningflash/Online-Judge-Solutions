#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 1e9+1

ll func(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum += (n / 5);
        n /= 5;
    }
    return sum;
}

ll binary_search(ll n) {
    bool f = true;
    ll low = 0, high = mx;
    while ((high - low) >= 4) {
        ll mid = (high + low) / 2;
        if (func(mid) < n) low = mid;
        else high = mid;
    }
    for (; low <= high; low++) {
        if (func(low) >= n) break;
    }
    if (func(low) != n) puts("impossible");
    else printf("%lld\n", low);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    ll n, t, cas(0);
    for (scanf("%lld", &t); t--; ) {
        scanf("%lld", &n);
        printf("Case %lld: ", ++cas);
        binary_search(n);
    }
}
