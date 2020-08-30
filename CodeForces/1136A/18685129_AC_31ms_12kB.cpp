#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, l, r, k;
	scanf("%d", &n);
	int a[1000], b[1000];
	for (i = 1; i <= n; i++)
		scanf("%d %d", &a[i], &b[i]);
	bool flg = false;
	scanf("%d", &k);
	for (i = 1; i <= n; i++) {
		if (k >= a[i] && k <= b[i]) {
			flg = true;
			break;
		}
	}
	printf("%d\n", n-i+1);
	return 0;
}