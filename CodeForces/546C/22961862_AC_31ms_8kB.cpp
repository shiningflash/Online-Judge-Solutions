#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e5;

int main() {
	// freopen("in", "r", stdin);
	
	int n, x, k1, k2;
	deque <int> d1, d2;
	cin >> n;
	cin >> k1;
	while (k1--) cin >> x, d1.push_back(x);
	cin >> k2;
	while (k2--) cin >> x, d2.push_back(x);

	for (int i = 1; i < mx; i++) {
		int a = d1.front(), b = d2.front();
		d1.pop_front();
		d2.pop_front();
		if (a > b) {
			d1.push_back(b);
			d1.push_back(a);
		}
		else {
			d2.push_back(a);
			d2.push_back(b);
		}
		if (d1.empty()) {
			cout << i << " " << 2 << endl;
			return 0;
		}
		else if (d2.empty()) {
			cout << i << " " << 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}