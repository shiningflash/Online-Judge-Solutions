#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	vector <ll> a;
	ll nn, mm, xx, yy, zz;
	while (scanf("%lld", &nn) == 1) {
		vector <bool> b(1000005);
		a.clear();
		for (int i = 0; i < nn; i++) scanf("%lld", &zz), a.push_back(zz), b[zz] = 1;
		scanf("%lld", &mm);
		ll dif, mn = INT_MAX;
		sort(a.begin(), a.end());
		for (int i = 0; i < nn; i++) {
			zz = abs(mm - a[i]);
			if (b[zz]) {
				dif = abs(zz - a[i]);
				if (dif < mn) mn = dif, xx = a[i], yy = zz;
			}
		}
		printf("Peter should buy books whose prices are %lld and %lld.\n\n", xx, yy);
	}
}