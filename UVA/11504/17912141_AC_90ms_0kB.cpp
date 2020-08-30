/*********************************************
 * Dominos UVA - 11504 (dfs + topsort approach)
 * @author Amirul Islam (shiningfalsh)
 *********************************************/

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

const int MAX = 100009;
vector <int> g[MAX];
bool vis[MAX];
int t, m, n, x, y;
stack <int> s;

inline void dfs(int u, int chk) {
    vis[u] = true;
    for (int i = 0; i < g[u].size(); i++) {
        int v = g[u][i];
        if (!vis[v]) dfs(v, chk);
    }
    if (chk) s.push(u);
}

int main() {
    for (scanint(t); t--; ) {
        scanf("%d %d", &n, &m);
        CLEAR(vis);
        for (int i = 1; i <= n; i++) g[i].clear();
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            g[x].pb(y);
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) dfs(i, 1);
        }
        CLEAR(vis);
        int cnt = 0;
        while (!s.empty()) {
            int v = s.top();
            s.pop();
            if (!vis[v]) cnt++, dfs(v, 0);
        }
        printf("%d\n", cnt);
    }
    return 0;
}