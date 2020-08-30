#include <bits/stdc++.h>
using namespace std;

int tst, t(0), w, h, x, y, cnt;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
char grid[22][22];

bool in_GRID(int x, int y) {
    return (x >= 0 && y >= 0 && x < w && y < h);
}

void dfs(int i, int j) {
    cnt++;
    grid[i][j] = '#';
    for (int k = 0; k < 4; k++) {
        x = i + dx[k];
        y = j + dy[k];
        if (in_GRID(x, y) && grid[x][y] == '.') dfs(x, y);
    }
}

int main() {
//    freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &h, &w);
        cnt = 0;
        for (int i = 0; i < w; i++) scanf("%s", grid[i]);
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (grid[i][j] == '@') {
                    dfs(i, j);
                    break;
                }
            }
        }
        printf("Case %d: %d\n", ++t, cnt);
    }
    return 0;
}