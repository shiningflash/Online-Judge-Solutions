#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define ff first
#define ss second

int tst, t(0), n, m;
vector <int> g[105];
bool vis[105][2];
 
int bfs() {
    int cnt(0);
    queue <pii> q;
    q.push({1, 1});
    while (!q.empty()) {
        pii u = q.front();
        q.pop();
        if (u.ss) cnt++;
        for (int i = 0; i < g[u.ff].size(); i++) {
            int v = g[u.ff][i];
            if (!vis[v][!u.ss]) vis[v][!u.ss] = 1, q.push({v, !u.ss});
        }
    }
    return cnt;
} 

int main() {
    for (scanf("%d", &tst); tst--; ) {
        for (int i = 0; i < 105; i++) g[i].clear(), vis[i][0] = vis[i][1] = 0;
        scanf("%d %d", &n, &m);
        int u, v;
        for (int i = 0; i < m; i++) scanf("%d %d", &u, &v), g[u].push_back(v), g[v].push_back(u);
        printf("Case %d: %d\n", ++t, bfs()-1);
    }
}