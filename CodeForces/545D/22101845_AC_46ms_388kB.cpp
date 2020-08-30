#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
	int n, ans(0), k(0);
	scanf("%d", &n);
	int a[n+5];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a+n);
	for (int i = 0; i < n; i++) {
		if (k <= a[i]) k += a[i], ans++;
	}
	printf("%d\n", ans);
	return 0;
}