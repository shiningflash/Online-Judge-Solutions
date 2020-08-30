#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define le 100005

int main() {
    //freopen("in", "r", stdin);
    int n, m;
    ll a[le], dpR[le], dpC[le], r[le];
    while (scanf("%d %d", &n, &m) && (n+m)) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) scanf("%lld", &a[j]);
            a[m+1] = 0;
            for (int j = 2; j <= m+1; j++) dpR[j] = max(dpR[j-1], dpR[j-2]+a[j-1]);
            r[i] = dpR[m+1];
        }
        r[n+1] = 0;
        for (int j = 2; j <= n+1; j++) dpC[j] = max(dpC[j-1], dpC[j-2]+r[j-1]);
        printf("%lld\n", dpC[n+1]);
    }
    return 0;
}