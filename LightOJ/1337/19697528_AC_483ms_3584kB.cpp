#include <bits/stdc++.h>
using namespace std;

int t(0), tst, m, n, q, x, y;
int val[505][505], dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
bool vis[505][505];
char g[505][505];

int bfs(int x, int y) {
    int cnt = (g[x][y] == 'C');
    memset(vis, 0, sizeof(vis));
    vis[x][y] = 1;
    queue <int> q;
    q.push(x), q.push(y);
    while (!q.empty()) {
        int ux = q.front(); q.pop();
        int uy = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            int vx = ux + dx[k];
            int vy = uy + dy[k];
            if (vx >= 0 && vx < m && vy >= 0 && vy < n) {
                if (g[vx][vy] != '#') {
                    if (!vis[vx][vy]) {
                        vis[vx][vy] = 1;
                        cnt += (g[vx][vy] == 'C');
                        q.push(vx), q.push(vy);
                    }
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (vis[i][j]) val[i][j] = cnt;
    return cnt;
}

int main() {
    //freopen("in", "r", stdin);
    char ch;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d %d", &m, &n, &q);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf(" %c", &ch), g[i][j] = ch;
            }
        }
        memset(val, -1, sizeof(val));
        printf("Case %d:\n", ++t);
        while (q--) {
            scanf("%d %d", &x, &y);
            --x, --y;
            if (val[x][y] == -1) printf("%d\n", bfs(x, y));
            else printf("%d\n", val[x][y]);
        }
    }
    return 0;
}