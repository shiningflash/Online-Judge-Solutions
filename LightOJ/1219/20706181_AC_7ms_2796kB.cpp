#include <bits/stdc++.h>
using namespace std;
#define mx 10005

int tst, t(0), i, n, u, v, d, a[mx], vis[mx], ans;
vector <int> g[mx];

int dfs(int x, int par) {
    int rr = a[x] - 1;
    for (int y = 0; y < g[x].size(); y++) {
        if (g[x][y] == par) continue;
        rr += dfs(g[x][y], x);
    }
    ans += abs(rr);
    return rr;
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        for (i = 0; i <= n; i++) g[i].clear(), vis[i] = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {
            scanf("%d %d %d", &u, &v, &d);
            a[u] = v;
            while (d--) {
                scanf("%d", &v);
                vis[v] = 1;
                g[u].push_back(v);
                g[v].push_back(u);
            }
        }
        for (i = 1, ans = 0; i <= n; i++) {
            if (!vis[i]) {
                dfs(i, -1);
                break;
            }
        }
        printf("Case %d: %d\n", ++t, ans);
    }
}