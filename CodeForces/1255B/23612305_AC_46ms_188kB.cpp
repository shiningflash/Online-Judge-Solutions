#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
const int mx = 2e4;
vector <int> v;
 
pair<int, int> a[mx];
 
int main() {
	// freopen("in", "r", stdin);
	
	int n, m, t, z;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) cin >> z, a[i] = make_pair(z, i);
		if (n > m || n < 3) cout << -1 << endl;
		else {
			int cost = 0;
			v.clear();
			int mn = INT_MAX, tk, x, y;
			for  (int i = 1; i < n; i++) {
				v.push_back(i);
				v.push_back(i+1);
				tk = (a[i].first + a[i+1].first);
				if (tk < mn) mn = tk, x = i, y = i+1;
				cost += tk;
			}
 
			v.push_back(n);
			v.push_back(1);
			tk = (a[n].first + a[1].first);
			if (tk < mn) mn = tk, x = 1, y = n;
			cost += tk;
 
			cost += ((m - n) * mn);
 
			cout << cost << endl;
			for (int i = 0; i < v.size(); i+=2) {
				cout << v[i] << " " << v[i+1] << "\n";
			}
			for (int i = n; i < m; i++) {
				cout << x << " " << y << endl;
			}
		}
	}
}