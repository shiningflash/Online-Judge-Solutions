#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[2000];

int main() {
    // freopen("out.txt", "r", stdin);

	ll n, x, ans = 0;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++) scanf("%lld", &a[i]);

	unordered_map <ll, ll> mp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				mp[ (a[i] * a[j]) + a[k] ]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) continue;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++)  ans += mp[ (a[k] + a[j]) * a[i] ];
		}
	}
	printf("%lld\n", ans);
	return 0;
}
