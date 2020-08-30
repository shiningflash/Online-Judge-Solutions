#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t(0), tst, n, c;
    for (scanf("%lld", &tst); tst--; ) {
        scanf("%lld %lld", &n, &c);
        printf("Case %lld: %lld\n", ++t, ((n == 0) ? 0 : (n+c-1)/(n<<1)));
    }
}