#include <bits/stdc++.h>
using namespace std;

struct edge {
    string u, v;
    int w;
    bool operator < (const edge& p) const {
        return w > p.w;
    }
};

vector <edge> g;
int nodes, edges, t(0), w;
string u, v, src, dst;
map <string, string> par;

inline string find(string r) {
    return (par[r] == "") ? r : find(par[r]);
}

inline int kruskal() {
    sort(g.begin(), g.end());
    int mn = INT_MAX;
    for (int i = 0; i < edges; i++) {
        u = find(g[i].u);
        v = find(g[i].v);
        if (u != v) {
            par[u] = v;
            mn = min(mn, g[i].w);
        }
        if (find(src) == find(dst)) break;
    }
    return mn;
}

int main() {
    while (scanf("%d %d", &nodes, &edges) && nodes && edges) {
        par.clear();
        g.clear();
        for (int i = 0; i < edges; i++) {
            cin >> u >> v >> w;
            g.push_back({u, v, w});
        }
        cin >> src >> dst;
        printf("Scenario #%d\n%d tons\n\n", ++t, kruskal());
    }
}