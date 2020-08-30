// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("in", "r", stdin);
 
	int t, n;
	cin >> t;
	while (t--) {
		int x = 0, m;
		cin >> n;
		while (n--) cin >> m, x ^= m;
		cout << (x ? "First" : "Second") << endl;
	}
}