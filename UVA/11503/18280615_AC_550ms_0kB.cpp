#include <bits/stdc++.h>
using namespace std;

int par[100005];
int t, n, a, b, node;
string s, ss;
map <string, int> mp;

int Find(int r) {
	return (par[r] < 0) ? r : par[r] = Find(par[r]);
}

void Union(int u, int v) {
	if (par[u] > par[v]) swap(u, v);
	par[u] += par[v];
	par[v] = u;
}

int main() {
//	freopen ("in", "r", stdin);

	for (scanf("%d", &t); t--; ) {
		scanf("%d", &n);
		mp.clear();
		memset(par, -1, sizeof(par));
		node = 0;

		while (n--) {
			cin >> s >> ss;
			if (mp.find(s) == mp.end()) mp[s] = a = node++;
			else a = mp[s];
			if (mp.find(ss) == mp.end()) mp[ss] = b = node++;
			else b = mp[ss];

			int u = Find(a);
			int v = Find(b);
			if (u != v) Union(u, v);

			printf("%d\n", -par[Find(a)]);
		}
	}
	return 0;
}
