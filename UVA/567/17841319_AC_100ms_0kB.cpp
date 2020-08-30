/********************************
 * Risk UVA - 567
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

ll vis[100];
map <ll, vector <ll>> g;
ll n, t = 0;

ll bfs(ll src, ll dst) {
    mem(vis, -1);
    queue <ll> q;
    q.push(src);
    vis[src] = 1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < g[v].size(); i++) {
            if (vis[g[v][i]] == -1) {
                if (g[v][i] == dst) return vis[v];
                vis[g[v][i]] = vis[v] + 1;
                q.push(g[v][i]);
            }
        }
    }
}

int main() {
    while (true) {
        g.clear();
        ll u, v, q;
        for (int i = 1; i < 20; i++) {
            if ((scanf("%lld", &n)) == EOF) return 0;
            while (n--) {
                cin >> v;
                g[v].pb(i);
                g[i].pb(v);
            }
        }
        printf("Test Set #%lld\n", ++t);
        for (cin >> q; q--; ) {
            scanf("%lld %lld", &u, &v);
            printf("%2lld to %2lld: %lld\n", u, v, bfs(u, v));
        }
        printf("\n");
    }
    return 0;
}
