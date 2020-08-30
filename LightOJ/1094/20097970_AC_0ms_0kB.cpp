#include <bits/stdc++.h>
using namespace std;

vector < pair <int, int> > g[30005];
int t(0), tst, n, u, v, w, x, _mx, _end;

inline void dfs(int u, int par, int tcost) {
    for (int i = 0; i < g[u].size(); i++) {
        v = g[u][i].first, w = g[u][i].second;
        if (v == par) continue;
        dfs(v, u, tcost+w);
    }
    if (tcost > _mx) _mx = tcost, _end = u;
}

int main() {
    //freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) g[i].clear();
        for (int i = 0; i < n-1; i++) {
            scanf("%d %d %d", &u, &v, &w);
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }
        _mx = INT_MIN;
        dfs(0, -1, 0);
        _mx = INT_MIN;
        dfs(_end, -1, 0);
        printf("Case %d: %d\n", ++t, _mx);
    }
    return 0;
}