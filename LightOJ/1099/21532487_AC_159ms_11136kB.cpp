#include <bits/stdc++.h>
using namespace std;
#define mx 5005
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

int t, nodes, edges;
vector <pii> g[mx];
vector <int> dis[mx];

void dijkstra(int src) {
    priority_queue <node> q;
    q.push(node(src, 0));

    while (!q.empty()) {
        node top = q.top();
        q.pop();
        int u = top.u;
        int w = top.w;
        if (dis[u].size() == 0) dis[u].pb(w);
        else if (dis[u].size() == 1) {
            if (dis[u][0] != w) dis[u].pb(w);
        }
        else continue;
        for (int i = 0; i < (int) g[u].size(); i++) {
            int v = g[u][i].first;
            int nw = w + g[u][i].second;
            q.push(node(v, nw));
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    int u, v, w, t, cas(0);
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &nodes, &edges);
        for (int i = 1; i <= nodes; i++) g[i].clear(), dis[i].clear();
        while (edges--) {
            scanf("%d %d %d", &u, &v, &w);
            g[u].pb({v, w});
            g[v].pb({u, w});
        }
        dijkstra(1);
        printf("Case %d: %d\n", ++cas, dis[nodes][1]);
    }
}