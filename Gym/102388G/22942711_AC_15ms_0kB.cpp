#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e5;

int main() {
	// freopen("in", "r", stdin);
	
	int t, n, a, b;
	for (cin >> t; t--; ) {
		cin >> n >> a >> b;
		if (b >= a && n > a) cout << -1 << endl;
		else {
			int day = 0;
			while (1) {
				day++;
				n -= a;
				if (n <= 0) break;
				n += b;
			}
			cout << day << endl;
		}
	}
}