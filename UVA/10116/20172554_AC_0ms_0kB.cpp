#include <bits/stdc++.h>
using namespace std;

string s;
vector <string> grid;
int x, y, z, vis[11][11];

void robot_motion() {
    int i = 0, j = z-1, loop = 0, cnt = 0;
    vis[i][j] = 0;
    while (1) {
        cnt++;
        if (grid[i][j] == 'N') i--;
        else if (grid[i][j] == 'S') i++;
        else if (grid[i][j] == 'W') j--;
        else j++;
        if (i < 0 || j < 0 || i >= x || j >= y) break;
        if (vis[i][j] != -1) { loop = 1; break; }
        else vis[i][j] = cnt;
    }
    if (!loop) printf("%d step(s) to exit\n", cnt);
    else printf("%d step(s) before a loop of %d step(s)\n", vis[i][j], cnt-vis[i][j]);
}

int main() {
    // freopen("in", "r", stdin);
    while (scanf("%d %d %d", &x, &y, &z)) {
        if (x == 0 && y == 0 && z == 0) break;
        memset(vis, -1, sizeof(vis));
        grid.clear();
        for (int i = 0; i < x; i++) cin >> s, grid.push_back(s);
        robot_motion();
    }
    return 0;
}