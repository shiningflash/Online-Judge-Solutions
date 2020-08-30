// complexity - O(n*n*log2(n*n))

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 4e4+4;

int main() {
	int n;
	scanf("%d", &n);
	
	int a[n], b[n], c[n], d[n];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	}
	
	sort(a, a+n);
	sort(b, b+n);
	sort(c, c+n);
	sort(d, d+n);
	
	int X[n*n], Y[n*n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			X[i*n+j] = a[i] + b[j];
			Y[i*n+j] = c[i] + d[j];
		}
	}
	
	ll sum = 0;
	sort(Y, Y+n*n);
	for (int i = 0; i < n*n; i++) {
		if (binary_search(Y, Y+n*n, -X[i])) {
			 sum += (upper_bound(Y, Y+n*n, -X[i]) - (lower_bound(Y, Y+n*n, -X[i])));
		}
	}
	printf("%lld\n", sum);
}