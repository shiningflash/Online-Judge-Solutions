#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll tst, t(0), k, c, n, a[100005];
	for (scanf("%lld", &tst); tst--; ) {
		scanf("%lld %lld %lld %lld", &k, &c, &n, &a[0]);
		for (ll i = 1; i < n; i++) a[i] = (k * a[i-1] + c) % 1000007;
		sort(a, a+n);
		ll sum = 0;
	    for (ll i = 0; i < n; i++) sum += ((a[i]*i) - (a[i]*(n-i-1)));
	    printf("Case %d: %lld\n", ++t, sum);
	}
}