#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
int t(0), tst, m, n, x, y;
int vis[22][22], s[22][22], dis[22][22];

int bfs(int u, int v, int sx, int sy) {
    memset(vis, 0, sizeof(vis));
//    memset(dis, 0, sizeof(dis));

    vis[u][v] = 1;
    dis[u][v] = 0;
    queue <pair<int, int> > q;
    q.push({u, v});

    while (!q.empty()) {
        pair<int, int> uu = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            x = uu.first + dx[k];
            y = uu.second + dy[k];
            if ((x >= 0 && x < m) && (y >= 0 && y < n) && (!vis[x][y] && !s[x][y])) {
                vis[x][y] = 1;
                dis[x][y] = dis[uu.first][uu.second] + 1;
                if (x == sx && y == sy) return dis[x][y];
                q.push({x, y});
            } 
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        memset(s, 0, sizeof(s));

        scanf("%d %d", &m, &n);
        char ch;
        int mx = 0, ax, ay, bx, by, cx, cy, sx, sy;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                //scanf("%c", &ch);
                cin >> ch;
                if (ch == '#' || ch == 'm') s[i][j] = 1;
                else if (ch == 'a') ax = i, ay = j;
                else if (ch == 'b') bx = i, by = j;
                else if (ch == 'c') cx = i, cy = j;
                else if (ch == 'h') sx = i, sy = j;
            }
        }
        mx = max(mx, bfs(ax, ay, sx, sy));
        mx = max(mx, bfs(bx, by, sx, sy));
        mx = max(mx, bfs(cx, cy, sx, sy));
        printf("Case %d: %d\n", ++t, mx);
    }
    return 0;
}