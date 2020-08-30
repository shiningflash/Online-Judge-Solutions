#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[22], b[22], n, t, cas(0);

int init() {
    a[0] = 1;
    for (int i = 1; i <= 20; i++) a[i] = a[i-1] * i;
}

int main() {
    //freopen("in", "r", stdin);
    init();
    for (scanf("%lld", &t); t--; ) {
        scanf("%lld", &n);
        int cnt(0);
        for (int i = 20; i >= 0; i--) {
            if (n >= a[i]) b[cnt++] = i, n-= a[i];
        }
        printf("Case %lld: ", ++cas);
        if (n) puts("impossible");
        else {
            for (int i = cnt-1; i > 0; i--) printf("%lld!+", b[i]);
            printf("%lld!\n", b[0]);
        }
    }
}