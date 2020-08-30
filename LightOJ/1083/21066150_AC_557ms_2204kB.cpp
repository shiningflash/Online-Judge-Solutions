#include <bits/stdc++.h>
using namespace std;

int a[30005], tst, cas(0), n;

void histogram() {
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		int cur = a[i], cnt(1);
		for (int j = i-1; j >= 0; j--) {
			if (cur <= a[j]) cnt++;
			else break;
		}	
		for (int j = i+1; j < n; j++) {
			if (cur <= a[j]) cnt++;
			else break;
		}
		if (cnt * cur > mx) mx = cnt * cur;
	}
	printf("Case %d: %d\n", ++cas, mx);
}

int main() {
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d", &n);
		for (int i = 0; i < n; scanf("%d", &a[i++]));
		histogram();
	}
}