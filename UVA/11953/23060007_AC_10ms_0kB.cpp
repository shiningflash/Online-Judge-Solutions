#include <bits/stdc++.h>
using namespace std;

const int MX = 105;
char grid[MX][MX];
int dis[MX][MX];
bool vis[MX][MX];

int tmp = 0, n = 0;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void floodfill(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= n) return; // base case

    if (grid[i][j] != '.' && !vis[i][j]) {
        vis[i][j] = true;
        if (grid[i][j] == 'x') tmp = 1;

        for (int m = 0; m < 4; m++) {
            int x = i + dx[m];
            int y = j + dy[m];
            floodfill(x, y);
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);

    int t, cas(0);
    cin >> t;
	while (t--) {
        cin >> n;
        getchar();
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        memset(vis, 0, sizeof(vis));
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != '.' && !vis[i][j]) {
                    tmp = 0;
                    floodfill(i, j);
                    cnt += tmp;
                }
            }
        }
        printf("Case %d: ", ++cas);
        cout << cnt << endl;
    }
	return 0;
}
