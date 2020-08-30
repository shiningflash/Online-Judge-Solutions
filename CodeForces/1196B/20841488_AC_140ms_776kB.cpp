#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n, k, a[200005];
	for (scanf("%d", &t); t--; ) {
		scanf("%d %d", &n, &k);
		int cnt = 0;
		for (int i = 1; i <= n; i++) scanf("%d", &a[i]), a[i] &= 1, cnt += a[i];
		if (cnt < k || (cnt + k) % 2 == 1) puts("NO");
		else {
			puts("YES");
			for (int i = 1, cnt_ = 0; i <= n; i++) {
				if (a[i] == 1) {
					if (++cnt_ == k) {
						printf("%d\n", n);
						break;
					}
					printf("%d ", i);
				}
			}
		}
	}
}