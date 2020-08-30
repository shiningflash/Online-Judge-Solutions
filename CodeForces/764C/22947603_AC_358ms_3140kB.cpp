#include <bits/stdc++.h>
using namespace std;

const int mx = 2e5+5;
pair <int, int> g[mx];
int c[mx], degree[mx];

int main() {
    //freopen("in.txt", "r", stdin);

	int n, u, v;
	cin >> n;
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		g[i] = make_pair(u, v);
	}
	for (int i = 1; i <= n; i++) cin >> c[i];
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		u = g[i].first;
		v = g[i].second;
		if (c[u] != c[v]) cnt++, degree[u]++, degree[v]++;
	}
	for (int i = 1; i <= n; i++) {
		if (cnt == degree[i]) {
			cout << "YES\n" << i << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}

