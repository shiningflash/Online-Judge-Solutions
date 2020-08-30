#include <bits/stdc++.h>
using namespace std;
#define mx 200005
 
int a[mx], t[mx], s[mx];
 
int main() {
	int n, q, k, m, val, pos;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	scanf("%d", &q);
	for (int i = 1; i <= q; i++) {
		scanf("%d", &k);
		if (k == 1) {
			scanf("%d %d", &pos, &val);
			a[pos] = val;
			t[pos] = i;
		}
		else scanf("%d", &s[i]);
	}
	for (int i = q; i; i--) s[i] = max(s[i], s[i+1]);
	for (int i = 1; i <= n; i++) printf("%d ", max(a[i], s[t[i]+1]));
	printf("\n");
}