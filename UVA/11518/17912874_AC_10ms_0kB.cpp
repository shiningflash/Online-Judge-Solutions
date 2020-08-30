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

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

/**Define function and object**/
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

/**Define constant value**/
#define le 5001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef unsigned long long ll;
using namespace std;

/********* END **********/

const int MAX = 10010;
vector <int> g[MAX];
bool vis[MAX];
int t, n, x, y, l, u, v, z, cnt = 0;

inline void bfs(int u) {
    queue <int> q;
    vis[u] = true;
    q.push(u);
    cnt++;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto i: g[v]) {
            if (!vis[i]) {
                cnt++;
                q.push(i);
                vis[i] = true;
            }
        }
    }
}

int main() {
    for (scanint(t); t--; ) {
        scanf("%d %d %d", &n, &x, &y);
        CLEAR(vis);
        for (int i = 1; i <= n; g[i].clear(), i++);
        while(x--) {
            scanf("%d %d", &u, &v);
            g[u].pb(v);
        }
        while (y--) {
            scanint(z);
            if (!vis[z]) bfs(z);
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
    return 0;
}
