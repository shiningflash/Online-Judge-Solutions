#include <bits/stdc++.h>
using namespace std;
#define le 100005
#define pb push_back

int par[le];

int find(int r) {
	return par[r] == r ? r : par[r] = find(par[r]);
}

int main() {
    //freopen("in", "r", stdin);
    int m, n, k, x, rnk(0);
    scanf("%d %d", &m, &n);
    vector<int> a[le];
    for (int i = 1; i <= m; i++) {
		for (scanf("%d", &k); k--; ) {
			scanf("%d", &x);
			a[x].pb(i);
		}
    }
    for (int i = 1; i <= m; i++) par[i] = i;
    for (int i = 1; i <= n; i++) {
		int u = find(a[i][0]);
		int v = find(a[i][1]);
		if (u != v) rnk++, par[u] = v;
    }
    printf("%d\n", rnk);
}