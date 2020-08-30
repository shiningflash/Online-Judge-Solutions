/*
    @algorithm  : flood fill algorithm
	@author     : Amirul Islam
    @complexity : O(N*M)
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 40;

char grid[mx][mx];
bool vis[mx][mx];
int n, m = 0;

int dx[] = {+0, +0, -1, +1};
int dy[] = {-1, +1, +0, +0};

bool check(int i, int j) {
    if (i > 0 && j > 0 && i <= n && j <= n && grid[i][j] == '.') {
        return true;
    }
    m++;
    return false;
}

void dfs(int i, int j) {
    if (check(i, j) && !vis[i][j]) {
        vis[i][j] = 1;

        for (int z = 0; z < 4; z++) {
            int x = i + dx[z];
            int y = j + dy[z];
            dfs(x, y);
        }
    }
}

int main() {
    // freopen("in", "r", stdin);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    dfs(1, 1);
    dfs(n, n);
    cout << ((m - 4) * 9) << endl;
}