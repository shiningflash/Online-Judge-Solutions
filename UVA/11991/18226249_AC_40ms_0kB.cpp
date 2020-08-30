#include <bits/stdc++.h>
using namespace std;

int n, m, k, v, a, b;
map<int, vector<int> > mp;

int main() {
	// freopen("in", "r", stdin);
	while (scanf("%d %d", &n, &m) != EOF) {
		mp.clear();
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a);
			mp[a].push_back(i);
		}
		while (m--) {
			scanf("%d %d", &k, &v);
			if (mp[v].size() < k) printf("0\n");
			else printf("%d\n", mp[v][k-1]);
		}
	}
	return 0;
}
