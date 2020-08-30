#include <bits/stdc++.h>
using namespace std;
#define mx 2005
#define pb push_back

bool vis[mx];
int dis[mx][mx];
vector <int> g[mx];

void bfs(int src) {
    queue <int> q;
    q.push(src);
    dis[src][src] = 0;
    vis[src] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++) {
            int v = g[u][i];
            if (!vis[v]) {
                q.push(v);
                vis[v] = 1;
                dis[src][v] = dis[src][u] + 1;
            }
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    int n, m, u, v;
    scanf("%d %d", &n, &m);
    while (m--) scanf("%d %d", &u, &v), g[u].pb(v), g[v].pb(u);
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) dis[i][j] = mx;
    for (int i = 1; i <= n; i++) memset(vis, 0, sizeof(vis)), bfs(i);
    int ans = -1;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) ans = max(ans, dis[i][j]);
    if (ans == mx) printf("=[\n");
    else printf("=] %d\n", ans);
}
