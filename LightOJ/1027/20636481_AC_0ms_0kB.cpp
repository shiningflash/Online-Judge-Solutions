#include <bits/stdc++.h>
using namespace std;

int main() {
	int tst, t(0), n, m;
	for (scanf("%lld", &tst); tst--; ) {
		int p(0), q(0), r;
		for (scanf("%d", &n); n--; ) {
			scanf("%d", &m);
			p += abs(m);
			if (m > 0) q++;
		}
		if (!q) printf("Case %d: inf\n", ++t);
		else {
			r = __gcd(p, q);
			printf("Case %d: %d/%d\n", ++t, p/r, q/r);
		}
	}
}