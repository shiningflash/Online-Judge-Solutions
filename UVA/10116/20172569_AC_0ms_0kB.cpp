#include <bits/stdc++.h>
using namespace std;

string grid[10];
int x, y, z, vis[11][11];

void robot_motion() {
    int i(0), loop(0), cnt(0), j = z-1;
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
    while ((scanf("%d %d %d", &x, &y, &z)) && (x+y+z)) {
        memset(vis, -1, sizeof(vis));
        for (int i = 0; i < x; i++) cin >> grid[i];
        robot_motion();
    }
    return 0;
}