#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
 
int tst, t(0), r, c, jx, jy, ans, ux, uy, vx, vy, f[205][205], vis[205][205];
char g[205][205];
queue <pii> fq;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
 
bool valid(int x, int y) {
    return (x >= 0 && y >= 0 && x < r && y < c);
} 
 
void spreadingFire() {
    while (!fq.empty()) {
        ux = fq.front().first;
        uy = fq.front().second;
        fq.pop();
        for (int i = 0; i < 4; i++) {
            vx = ux + dx[i];
            vy = uy + dy[i];
            if (valid(vx, vy) && g[vx][vy] == '.' && !f[vx][vy]) {
                fq.push({vx, vy});
                f[vx][vy] = f[ux][uy] + 1;
            }
        }
    }
}
 
int bfs() {
    if (jx == 0 || jy == 0 || jx == r-1 || jy == c-1) return 1;
 
    queue <pii> jq;
    jq.push({jx, jy});
    vis[jx][jy] = 1;
 
    while (!jq.empty()) {
        ux = jq.front().first;
        uy = jq.front().second;
        jq.pop();
        for (int i = 0; i < 4; i++) {
            vx = ux + dx[i];
            vy = uy + dy[i];
            if (valid(vx, vy) && !vis[vx][vy] && vis[ux][uy] + 1 < f[vx][vy]) {
                if (vx == 0 || vy == 0 || vx == r-1 || vy == c-1) return vis[ux][uy] + 1;
                jq.push({vx, vy});
                vis[vx][vy] = vis[ux][uy] + 1;
            }
        }
    }
    return -1;
}
 
int main() {
    for (scanf("%d", &tst); tst--; ) {
        memset(f, 0, sizeof(f));
        memset(vis, 0, sizeof(vis));
        scanf("%d %d", &r, &c);
        for (int i = 0; i < r; i++) cin >> g[i];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (g[i][j] == 'J') jx = i, jy = j;
                if (g[i][j] == 'F') fq.push({i, j}), f[i][j] = 1;
            }
        }
        spreadingFire();
        ans = bfs();
        if (ans >= 0) printf("Case %d: %d\n", ++t, ans);
        else printf("Case %d: IMPOSSIBLE\n", ++t);
    }
}