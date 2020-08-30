#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int tst, t(0), n, q, m, p, u;
	ll a[100005], v;
	for (scanf("%d", &tst); tst--; ) {
		memset(a, 0, sizeof(a));
		printf("Case %d:\n", ++t);
		scanf("%d %d", &n, &q);
		ll sum(0);
		n--;
		for (int i = 0; i <= n; i++) scanf("%lld", &a[i]), sum += (n - (2*i)) * a[i];
		while (q--) {
			scanf("%d", &p);
			if (p == 1) printf("%lld\n", sum);
			else {
				scanf("%d %lld", &u, &v);
				ll w = a[u];
				sum = sum - (ll) ((n - 2*u) * w) + (ll) ((n - 2*u) * v);
				a[u] = v;
			}
		}
	}
}