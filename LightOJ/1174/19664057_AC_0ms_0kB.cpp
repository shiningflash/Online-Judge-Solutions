#include <bits/stdc++.h>
using namespace std;

int t(0), tst, n, m, u, v, s, d;
int ts[105], td[105], vis[105];
vector <int> g[105];

void bfs(int u, int *t) {
    vis[u] = 1;
    queue <int> q;
    q.push(u);
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++) {
            v = g[u][i];
            if (!vis[v]) {
                vis[v] = 1;
                t[v] = t[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (int i = 0; i < n; g[i++].clear());
        for (scanf("%d", &m); m--; ) {
            scanf("%d %d", &u, &v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        scanf("%d %d", &s, &d);
        memset(vis, 0, sizeof(vis));
        memset(ts, 0, sizeof(ts));
        bfs(s, ts);
        memset(vis, 0, sizeof(vis));
        memset(td, 0, sizeof(td));
        bfs(d, td);
        int mx = 0;
        for (int i = 0; i < n; i++) mx = max(mx, ts[i]+td[i]);
        printf("Case %d: %d\n", ++t, mx);
    }
}
