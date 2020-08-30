#include <bits/stdc++.h>
using namespace std;

struct edge {
    int u, v;
    double w;
    bool operator < (const edge& p) const {
        return w < p.w;
    }
};

const int mx = 1000002;
edge g[mx];
int par[mx], n, m, x[mx], y[mx];

int find(int r) {
    return (par[r] == r) ? r : find(par[r]);
}

double kruskal(int cnt) {
    int u, v;
    for (scanf("%d", &m); m--; ) {
        scanf("%d %d", &u, &v);
        u = find(u);
        v = find(v);
        if (u != v) par[u] = v;
    }
    double ans = 0.0;
    sort(g, g+cnt);
    for (int i = 0; i < cnt; i++) {
        u = find(g[i].u);
        v = find(g[i].v);
        if (u != v) par[u] = v, ans += g[i].w;
    }
    return ans;
}

int main() {
    //freopen("in", "r", stdin);
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i <= n; i++) scanf("%d %d", &x[i], &y[i]);
        for (int i = 1; i <= n; i++) par[i] = i;
        int cnt(0);
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                g[cnt].u = i;
                g[cnt].v = j;
                g[cnt++].w = sqrt((x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]));
            }
        }
        printf("%.2lf\n", kruskal(cnt));
    }
    return 0;
}