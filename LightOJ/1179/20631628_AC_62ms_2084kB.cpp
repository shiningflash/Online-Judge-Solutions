#include <bits/stdc++.h>
using namespace std;

int main() {
	int t(0), tst, i, pos, n, k;
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d %d", &n, &k);
		for (i = 2, pos = 0; i <= n; i++) pos = (pos + k) % i;
		printf("Case %d: %d\n", ++t, pos+1);
	}
}