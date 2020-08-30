#include <bits/stdc++.h>
using namespace std;

int vis[20005], tst, t(0), n, u, v;

int bfs(int src, vector <int> g[]) {
    int lykans = 0, vampires = 1;
    vis[src] = 1;
    queue <int> q;
    q.push(src);
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++) {
            v = g[u][i];
            if (vis[v] == -1) {
                q.push(v);
                vis[v] = 1 - vis[u];
                if (vis[v] == 0) lykans++;
                else if (vis[v] == 1) vampires++;
            }
        }
    }
    return max(lykans, vampires);
}

int main() {
    //freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        vector <int> g[20005];
        set <int> s;
        for (scanf("%d", &n); n--; ) {
            scanf("%d %d", &u, &v);
            vis[u] = vis[v] = -1;
            g[u].push_back(v);
            g[v].push_back(u);
            s.insert(u); s.insert(v);
        }
        int ans = 0;
        for (set <int>:: iterator it = s.begin(); it != s.end(); it++) {
            if (vis[*it] == -1) ans += bfs(*it, g);
        }
        printf("Case %d: %d\n", ++t, ans);
    }
    return 0;
}