#include <bits/stdc++.h>
using namespace std;

int t(0), tst, n, k, a[1005], high, low, mid, i;

void binary_search() {
	while (low < high) {
		mid = (low + high) / 2;
		int day = 1, sum = 0;
		for (i = 0; i < n; i++) {
			if (sum + a[i] <= mid) sum += a[i];
			else sum = a[i], day++;
		}
		if (day <= k) high = mid;
		else low = mid+1;
	}
}

int main() {
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d %d", &n, &k);
		low = 0, high = 0, n++, k++;
		for (i = 0; i < n; i++) scanf("%d", &a[i]), low = max(low, a[i]), high += a[i];
		binary_search();
		printf("Case %d: %d\n", ++t, low);
		int sum = 0, cnt = 1;
		for (i = 0; i < n; i++) {
			if (sum + a[i] <= low && n-i-1 >= k-cnt) sum += a[i];
			else printf("%d\n", sum), cnt++, sum = a[i];
		}
		printf("%d\n", sum);
	}
}