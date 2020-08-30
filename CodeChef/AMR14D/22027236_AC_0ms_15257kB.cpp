#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	map<int, int> m;
	int t, n, x;
	for (cin >> t; t--; ) {
		m.clear();
		bool flag = false;
		for (cin >> n; n--; ) {
			cin >> x;
			if (m[x]) flag = true;
			m[x]++;
		}
		cout << (flag ? "NO\n" : "YES\n");
	}
	
	return 0;
}