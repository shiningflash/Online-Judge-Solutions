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

const int MAX = 105;
vector <int> g[MAX];
bool vis[MAX];
int t, n, x, y, u, v;

inline void dfs(int u) {
    vis[u] = true;
    for (int i = 0; i < g[u].size(); i++) {
        int v = g[u][i];
        if (!vis[v]) dfs(v);
    }
}

int main() {
    while (scanint(n) && n) {
        for (int i = 1; i <= n; g[i] .clear(), i++);
        while (scanint(u) && u)
            while (scanint(v) && v)
                g[u].pb(v);

        for (scanint(t); t--; ) {
            scanint(x);
            CLEAR(vis);
            for (auto i: g[x]) dfs(i);
            vector <int> vec;
            for (int i = 1; i <= n; i++)
                if (!vis[i]) vec.pb(i);
            printf("%d", vec.size());
            for (auto i: vec) printf(" %d", i);
            printf("\n");
        }
    }
    return 0;
}
