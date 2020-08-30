#include <bits/stdc++.h>
using namespace std;

const int MX = 100;
char g[MX][MX];
int dis[MX][MX];
bool vis[MX][MX];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int C, R, sourceX, sourceY, destinationX, destinationY;

void dijkstra() {
	for (int i = 0; i < MX; i++) {
        for (int j = 0; j < MX; j++) {
            dis[i][j] = INT_MAX;
            vis[i][j] = false;
        }
	}
	dis[sourceY][sourceX] = 0;
	priority_queue <pair <int, pair <int, int> >, vector <pair <int, pair<int, int> > >, greater <pair <int, pair <int, int> > > > q;
	q.push(make_pair(dis[sourceY][sourceX], make_pair(sourceY, sourceX)));
	while (!q.empty()) {
        pair <int, pair <int, int> > p = q.top();
        q.pop();
        int a = p.second.first;
        int b = p.second.second;
        int w = p.first;
        for (int i = 0; i < 4; i++) {
            int py = a + dy[i];
            int px = b + dx[i];
            int d;
            if (g[py][px] == 'D') d = 0;
            else if (g[py][px] < '0' || g[py][px] > '9') continue;
            else d = g[py][px] - '0';
            if (px >= 0 && px < C && py >= 0 && py < R && dis[py][px] > w + d) {
                dis[py][px] = w + d;
                q.push(make_pair(dis[py][px], make_pair(py, px)));
            }
        }
	}
	cout << dis[destinationY][destinationX] << endl;
}

int main() {
    //freopen("in.txt", "r", stdin);

	while (scanf("%d %d", &C, &R) && C && R) {
        for (int i = 0; i < R; i++) {
            cin >> g[i];
            for (int j = 0; j < C; j++) {
                if (g[i][j] == 'S') sourceX = j, sourceY = i;
                if (g[i][j] == 'D') destinationX = j, destinationY = i;
            }
        }
        dijkstra();
    }
	return 0;
}
