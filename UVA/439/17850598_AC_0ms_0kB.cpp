/********************************
 * Knight Moves UVA - 439
 * using bfs (2D) approach
 * author - Amirul islam
 ********************************/

#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <stack>
#include <list>
#include <iostream>
#include <assert.h>

#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define mp make_pair
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 1000009
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

#define scanint(a) scanf("%d", &a)
#define scanLLD(a) scanf("%lld", &a)

typedef long long ll;
using namespace std;

/*--------------**----------------*/

typedef pair <int, int> PAIR;

int board[9][9], vis[9][9], temp[9][9];
int ax, ay, bx, by;
int dx[] = {-2, -1, -2, -1, 1, 2, 2, 1};
int dy[] = {-1, -2, 1, 2, 2, 1, -1, -2};

bool insideBoard(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

void bfs() {
    CLEAR(board); CLEAR(vis); CLEAR(temp);
    queue <PAIR> q;
    q.push(mp(ax, ay));
    temp[ax][ay] = 0;
    while (!q.empty()) {
        PAIR pos = q.front();
        q.pop();
        int x = pos.first, y = pos.second;
        if (x == bx && y == by) break;
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (insideBoard(nx, ny) && !vis[nx][ny]) {
                vis[nx][ny] = 1;
                q.push(mp(nx, ny));
                temp[nx][ny] = temp[x][y] + 1;
            }
        }
    }
}

int main() {
    char src[4], dst[4];
    while (scanf("%s %s", &src, &dst) != EOF) {
        ax = src[0] - 'a' + 1;
        ay = src[1] - '0';
        bx = dst[0] - 'a' + 1;
        by = dst[1] - '0';
        bfs();
        printf("To get from %s to %s takes %d knight moves.\n", src, dst, temp[bx][by]);
    }
    return 0;
}