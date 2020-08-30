#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
 
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
 
char dst = 'A', g[13][13];
int tst, t(0), sx, sy, n, dis[13][13], vis[13][13];
 
bool inside(int i, int j) {
	return (i >= 0 && i < n && j >= 0 && j < n);
}
 
int bfs(int x, int y, char food) {
	queue <pi> q;
	q.push({x, y});
	memset(vis, 0, sizeof(vis));
	vis[x][y] = 1;
	g[x][y] = '.';
	if (food == dst) return dis[x][y];
	while (!q.empty()) {
		int ux = q.front().first;
		int uy = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int vx = ux + dx[i];
			int vy = uy + dy[i];
			if (inside(vx, vy) && !vis[vx][vy]) {
				if (g[vx][vy] >= 'A' && g[vx][vy] <= 'Z') {
					if (abs(g[vx][vy] - food) == 1) {
						dis[vx][vy] = dis[ux][uy] + 1;
						return bfs(vx, vy, g[vx][vy]);
					}
				}
				else if (g[vx][vy] != '#') {
					vis[vx][vy] = 1;
					q.push({vx, vy});
					dis[vx][vy] = dis[ux][uy] + 1;
				}
			}
		}
	}
	return -1;
}
 
int main() {
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d", &n);
		dst = 'A';
		memset(dis, 0, sizeof(dis));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf(" %c", &g[i][j]);
				if (g[i][j] >= 'A' && g[i][j] <= 'Z') {
					if (g[i][j] == 'A') sx = i, sy = j;
					dst = max(dst, g[i][j]);
				}
			}
		}
		int ans = bfs(sx, sy, 'A');
		if (ans >= 0) printf("Case %d: %d\n", ++t, ans);
		else printf("Case %d: Impossible\n", ++t);
	}
	return 0;
}