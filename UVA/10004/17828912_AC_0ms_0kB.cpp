/********************************
 * Bicoloring UVA - 10004
 * using bfs approach, O(v+E)
 * @author Amirul islam
                   _
   _|_ o._ o._  __|_| _. _|_
  _>| ||| ||| |(_|| |(_|_>| |
                _|
 *********************************/

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

int color[205];
vector <bool> vis;
vector <vector <int> > g;
int nodes, edges;

bool bicolor(int src) {
    mem(color, -1);
    queue <int> q;
    q.push(src);
    color[src] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        vis[u] = true;

        for (auto v : g[u]) {
            if (color[v] == color[u]) return false;
            color[v] = !color[u]; // change color to opposite
            if (!vis[v]) q.push(v);
        }
    }
    return true;
}

int main() {
    while (scanf("%d", &nodes) && nodes) {
        scanf("%d", &edges);

        vis.clear();
        g.clear();
        vis.assign(nodes, false);
        g.assign(nodes, vector<int>());

        int u, v;
        for (int i = 0; i < edges; i++) {
            scanf("%d %d", &u, &v);
            g[u].pb(v);
            g[v].pb(u);
        }

        if (bicolor(0)) cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";
    }
    return 0;
}
