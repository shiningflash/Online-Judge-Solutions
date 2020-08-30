#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, l, r, x;
	for (cin >> n; n--; ) {
		cin >> l >> r;
		for (int i = 0; i < 60; i++) {
			if ((l & (1LL << i)) == 0) {
				x = 1LL << i;
				if (l + x <= r) l += x;
			}
		}
		cout << l << endl;
	}
	return 0;
}
