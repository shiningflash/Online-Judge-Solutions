#include <bits/stdc++.h>
using namespace std;

const int len = 30005;
int par[len], n, m, a, b, c;

int Find(int r) {
	return (par[r] == r) ? r : par[r] = Find(par[r]);
}

void Union(int x, int y) {
	int u = Find(x);
	int v = Find(y);
	if (!v) par[u] = v;
	else if (u != v) par[v] = u;
}

int main() {
	// freopen("in", "r", stdin);
	while (scanf("%d %d", &n, &m) && n|m) {
		for (int i = 0; i < n; par[i] = i, i++);
		while (m--) {
			scanf("%d", &a);
			if (a > 0) {
				scanf("%d", &b);
				for (int i = 1; i < a; i++) {
					scanf("%d", &c);
					Union(b, c);
				}
			}
		}
		int cnt(0);
		for (int i = 0; i < n; i++) {
			if (Find(i) == 0) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
