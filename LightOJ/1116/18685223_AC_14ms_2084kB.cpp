#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll tst, t = 1, w, n, m, q;
    for (scanf("%lld", &tst); tst--; ) {
        scanf("%lld", &w);
        if (w & 1) printf("Case %lld: Impossible\n", t++);
        else {
            for (int m = 2; m <= w; m += 2) {
                if (!(w % m)) {
                    n = w / m;
                    if (n & 1) {
                        printf("Case %lld: %lld %lld\n", t++, n, m);
                        break;
                    }
                }
            }
        }
    }
}