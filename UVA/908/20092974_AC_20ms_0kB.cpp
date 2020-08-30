#include <bits/stdc++.h>
using namespace std;

struct edge {
    int u, v, w;
    bool operator < (const edge& p) const {
        return w < p.w;
    }
};

const int mx = 1e7;
vector <edge> g;
int parent[mx];
int nodes, edges, u, v, w, m, n, k;

inline int find(int r) {
    return (parent[r] == r) ? r : find(parent[r]);
}

inline int kruskal() {
    sort(g.begin(), g.end());
    for (int i = 0; i < mx; i++) parent[i] = i;
    int tcost(0);
    for (int i = 0; i < (int) g.size(); i++) {
        u = find(g[i].u);
        v = find(g[i].v);
        if (u != v) {
            parent[u] = v;
            tcost += g[i].w;
        }
    }
    return tcost;
}

int main() {
    bool blank = false;
    while (scanf("%d", &n) != EOF) {
        g.clear();
        int ans1(0), ans2(0);
        for (int i = 0; i < n-1; i++) {
            scanf("%d %d %d", &u, &v, &w);
            g.push_back({u, v, w});
            ans1 += w;
        }
        for (scanf("%d", &k); k--; ) {
            scanf("%d %d %d", &u, &v, &w);
            g.push_back({u, v, w});
        }
        for (scanf("%d", &m); m--; ) scanf("%d %d %d", &u, &v, &w);
        ans2 = kruskal();
        if (blank) puts("");
        printf("%d\n%d\n", ans1, ans2);
        blank = true;
    }
    return 0;
}