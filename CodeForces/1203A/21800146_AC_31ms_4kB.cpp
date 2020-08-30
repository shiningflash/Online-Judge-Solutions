#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[205], one(0);
	for (scanf("%d", &t); t--; ) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			if (a[i] == 1) one = i;
		}
		bool f = true, ff = true;
		for (int i = one, j = 1; j <= n; j++, i = (++i) % n) {
			//cout << a[i] << j << endl;
			if (a[i] != j) {
				f = false;
				break;
			}
		}
		if (!f) {
			
			for (int i = one, j = 1; j <= n; j++, i--) {
				//cout << a[i] << j << endl;
				if (a[i] != j) {
					ff = false;
					break;
				}
				if (i == 0) i = n;
			}
		}
		if (f || ff) printf("YES\n");
		else printf("NO\n");
	}
}