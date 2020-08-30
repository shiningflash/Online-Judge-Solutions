#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll i, t = 1, tst, b, dv, md;
    char a[1000];
    for (scanf("%lld", &tst); tst--; ) {
        dv = 0; md = 0;
        scanf("%s", a);
        scanf("%lld", &b);
        i = ((a[0] == '-') ? 1 : 0);
        while (a[i]) {
            dv += a[i++] - '0';
            md = dv % b;
            dv = md * 10;
        }
        if (md == 0) printf("Case %lld: divisible\n", t++);
        else printf("Case %lld: not divisible\n", t++);
    }
    return 0;
}