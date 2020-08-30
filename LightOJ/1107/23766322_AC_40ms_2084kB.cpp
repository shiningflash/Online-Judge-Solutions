#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x1, x2, y1, y2, u, v, n, m, cas(0);
	for (cin >> t; t--; ) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << ++cas << ":\n";
		for (cin >> n; n--; ) {
			cin >> u >> v;
			if (u >= x1 && u <= x2 && v >= y1 && v <= y2) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
	return 0;
}