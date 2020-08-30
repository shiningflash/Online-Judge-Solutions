#include <bits/stdc++.h>
using namespace std;

struct edge {
    int u, v, w;
};

const int mx = 2e3+5;
const int inf = 1e6;

edge g[mx];
int n, m, tt, uu, vv, ww, dis[mx];

bool bellman_ford(int src) {
    for (int i = 0; i < n; i++) dis[i] = inf;
    dis[src] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            uu = g[j].u;
            vv = g[j].v;
            ww = g[j].w;
            if (dis[uu] + ww < dis[vv]) dis[vv] = dis[uu] + ww;
        }
    }
    for (int i = 0; i < m; i++) {
        uu = g[i].u;
        vv = g[i].v;
        ww = g[i].w;
        if (dis[uu] + ww < dis[vv]) return true;
    }
    return false;
}

int main() {
    for (scanf("%d", &tt); tt--; ) {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < m; i++) {
            scanf("%d %d %d", &uu, &vv, &ww);
            g[i] = {uu, vv, ww};
        }
        int src_node = 0;
        bool cycle = bellman_ford(src_node);
        if (cycle) printf("possible\n");
        else printf("not possible\n");
    }
}