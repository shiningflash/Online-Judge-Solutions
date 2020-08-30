#include <bits/stdc++.h>
using namespace std;
#define mx 10005
#define inf 1<<30
#define pb push_back
#define pii pair <int, int>

struct node {
    int u, w;
    node(int u, int w) {
        this->u = u;
        this->w = w;
    };
    bool operator < (const node& p) const {
        return w > p.w;
    };
};

int t, nodes, edges, dis[mx];
vector <pii> g[mx];

int dijkstra(int src, int dst) {
    priority_queue <node> q;
    q.push(node(src, 0));
    dis[src] = 0;

    while (!q.empty()) {
        node top = q.top(); q.pop();
        int u = top.u;
        if (u == dst) return dis[dst];
        for (int i = 0; i < (int) g[u].size(); i++) {
            int v = g[u][i].first;
            int w = g[u][i].second;
            if (dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
                q.push(node(v, dis[v]));
            }
        }
    }
    return -1;
}

int main() {
    //freopen("in", "r", stdin);
    int u, v, w, src, dst;
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &nodes, &edges);
        for (int i = 0; i <= nodes; i++) {
            g[i].clear();
            dis[i] = inf;
        }
        while (edges--) {
            scanf("%d %d %d", &u, &v, &w);
            g[u].pb({v, w});
        }
        scanf("%d %d", &src, &dst);
        int ans = dijkstra(src, dst);
        if (ans == -1) puts("NO");
        else printf("%d\n", dis[dst]);
    }
}