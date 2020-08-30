#include <bits/stdc++.h>
using namespace std;

int a[30005], tst, cas(0), n, cnt(1);

void histogram() {
	int mx = INT_MIN;
	for (int i = 0; i < n; cnt = 1, i++) {
		for (int j = i-1; j >= 0; j--) {
			if (a[i] <= a[j]) cnt++;
			else break;
		}	
		for (int j = i+1; j < n; j++) {
			if (a[i] <= a[j]) cnt++;
			else break;
		}
		if (cnt * a[i] > mx) mx = cnt * a[i];
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