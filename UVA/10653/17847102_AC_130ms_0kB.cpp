/********************************
 * Bombs! NO they are Mines!! UVA - 10653 
 * using bfs approach
 * author - Amirul islam
                   _
   _|_ o._ o._  __|_| _. _|_
  _>| ||| ||| |(_|| |(_|_>| |
                _|
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

int g[1005][1005];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int row, column, r, c, n, bomb;

struct pos { int x, y; };

void bfs() {
    int ax, ay, bx, by;
    scanf("%d %d %d %d", &ax, &ay, &bx, &by);
    pos temp;
    temp.x = ax;
    temp.y = ay;
    queue<pos> q;
    q.push(temp);
    while(!q.empty()) {
        temp = q.front();
        q.pop();
        int xx, yy;
        for (int i = 0; i < 4; i++) {
            xx = temp.x + dx[i];
            yy = temp.y + dy[i];
            if (xx >= 0 && xx < row && yy >= 0 && yy < column && !g[xx][yy]) {
                pos t;
                t.x = xx;
                t.y = yy;
                q.push(t);
                g[xx][yy] = g[temp.x][temp.y] + 1;
            }
        }
    } 
    printf("%d\n", g[bx][by]);
}

int main() {
    while (scanf("%d %d", &row, &column) && (row && column)) {
        CLEAR(g);
        for (scanf("%d", &bomb); bomb--; ) {
            scanf("%d %d", &r, &n);
            for (int i = 0; i < n; i++) {
                scanf("%d", &c);
                g[r][c] = -1;
            }
        }
        bfs();
    }
    return 0;
}