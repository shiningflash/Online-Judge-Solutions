/*
    @data_structure  : Disjoint Set Unit (DSU)
    @author          : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
int par[mx], tmp[mx];

// return the representation of r
int Find(int r) {
	return (par[r] == r ? r : par[r] = Find(par[r]));
}

// make Union
void Union(int u, int v) {
	if (u > v) swap(u, v);
	par[u] = v, tmp[v] += tmp[u];
}

int main() {
    //freopen("in", "r", stdin);

	int n, q, a, b;
	string s, p;
	map <string, int> mp;

	while (scanf("%d %d", &n, &q) && n|q) {
		mp.clear();
		for (int i = 1; i <= n; i++) {
			cin >> s;
			mp[s] = i;
			par[i] = i;
			tmp[i] = 1;
		}
		for (int i = 1; i <= q; i++) {
			cin >> s >> p;
			int u = Find(mp[s]);
			int v = Find(mp[p]);
			if (u != v) Union(u, v);
		}
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			ans = max(ans, tmp[i]);
		}
		printf("%d\n", ans);
	}
    return 0;
}