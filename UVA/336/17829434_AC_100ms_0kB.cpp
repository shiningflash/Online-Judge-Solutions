/********************************
 * A Node Too Far UVA - 336
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

map <int, int> vis, vec, d;
map <int, vector <int>> g;
int n, t = 0;

int bfs(int nd, int ttl) {
    int cnt = 1;
    queue <int> q;
    q.push(nd);
    d[nd] = 0;
    vec[nd] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (vec[v] == 0) {
                q.push(v);
                d[v] = d[u] + 1;
                vec[v] = 1;
                if (d[u] < ttl) cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    while (scanf("%d", &n) && n) {
        vis.clear();
        g.clear();
        int u, v, cnt = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &u, &v);
            g[u].pb(v);
            g[v].pb(u);
            if (!vis[u]) cnt++;
            if (!vis[v]) cnt++;
            if (!vis[u] && u == v) cnt--;
            vis[u] = vis[v] = 1;
        }

        int nd, ttl;
        while (scanf("%d %d", &nd, &ttl) && (nd || ttl)) {
            int ans = 0;
            if (vis[nd]) {
                vec.clear();
                ans = bfs(nd, ttl);
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++t, cnt - ans, nd, ttl);
            d.clear();
        }
    }
    return 0;
}
