#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

int t(0), tst, n, u, v, w, x, y;
int dis1[30005], dis2[30005];
bool vis[30005];
vector <pi> g[30005];

int __bfs1(int s) {
    memset(vis, 0, sizeof(vis));
    //memset(dis1, 0, sizeof(dis1));
    int ans(0), m(0);
    vis[s] = 1;
    dis1[s] = 0;
    queue <int> q;
    q.push(s);
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int i = 0; i < g[u].size(); i++) {
            v = g[u][i].first;
            w = g[u][i].second;
            if (!vis[v]) {
                vis[v] = 1;
                dis1[v] = dis1[u] + w;
                if (dis1[v] > m) m = dis1[v], ans = v;
                q.push(v);
            }
        }
    }
    return ans;
}

void __bfs2(int s) {
    memset(vis, 0, sizeof(vis));
    //memset(dis2, 0, sizeof(dis2));
    vis[s] = 1;
    dis2[s] = 0;
    queue <int> q;
    q.push(s);
    while (!q.empty()) {
        u = q.front(); q.pop();
        for (int i = 0; i < g[u].size(); i++) {
            v = g[u][i].first;
            w = g[u][i].second;
            if (!vis[v]) {
                vis[v] = 1;
                dis2[v] = dis2[u] + w;
                q.push(v);
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) g[i].clear();
        for (int i = 0; i < n-1; i++) {
            scanf("%d %d %d", &u, &v, &w);
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }
        int p = __bfs1(u);
        int q = __bfs1(p);
        __bfs2(q);
        printf("Case %d:\n", ++t);
        for (int i = 0; i < n; i++) printf("%d\n", max(dis1[i], dis2[i]));
    }
    return 0;
}
