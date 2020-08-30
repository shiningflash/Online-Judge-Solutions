#include <bits/stdc++.h>
using namespace std;

int t(0), tst, u, v, k, n, m;
int person[105], reachable[1005], vis[1005];
vector <int> g[1005];

void dfs(int u) {
    vis[u] = 1;
    reachable[u]++;
    for (int i = 0; i < g[u].size(); i++) {
        v = g[u][i];
        if (!vis[v]) dfs(v);
    }
}

int main() {
    //freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d %d", &k, &n, &m);
        memset(reachable, 0, sizeof(reachable));
        for (int i = 0; i <= n; i++) g[i].clear();
        for (int i = 0; i < k; i++) scanf("%d", &person[i]);
        while (m--) scanf("%d %d", &u, &v), g[u].push_back(v);
        for (int i = 0; i < k; i++) {
            memset(vis, 0, sizeof(vis));
            dfs(person[i]);
        }
        int cnt(0);
        for (int i = 1; i <= n; i++) if (reachable[i] == k) cnt++;
        printf("Case %d: %d\n", ++t, cnt);
    }
    return 0;
}