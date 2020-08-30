/*********************************************
 * UVa 11060 - Beverages (bfs approach)
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

////////////////////////////////////////

const int MAX = 105;
vector <int> g[MAX];
int vis[MAX];
map <string, int> val;
map <int, string> nam;
int t = 0, n, k, x, y, l, u, v, z;
string str, s1, s2;

inline void bfs() {
    priority_queue <int, vector <int>, greater <int> > q;
    for (int i = 1; i <= n; i++)
        if (!vis[i]) q.push(i);

    while (!q.empty()) {
        int v = q.top();
        q.pop();
        cout << " " << nam[v];
        for (auto i: g[v]) {
            vis[i]--;
            if (!vis[i]) q.push(i);
        }
    }
}

inline void init() {
    CLEAR(vis);
    val.clear();
    nam.clear();
    for (int i = 1; i <= n; i++) g[i].clear();
}

int main() {
    while (scanf("%d", &n) != EOF) {
        init();
        z = 1;
        for (int i = 1; i <= n; i++) {
            cin >> str;
            val[str] = z;
            nam[z++] = str;
        }
        for (scanf("%d", &k); k--; ) {
            cin >> s1 >> s2;
            u = val[s1]; v = val[s2];
            g[u].pb(v);
            vis[v]++;
        }
        printf("Case #%d: Dilbert should drink beverages in this order:", ++t);
        bfs();
        printf(".\n\n");
    }
    return 0;
}
