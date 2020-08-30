/********************************************
 kruskal’s MST approach : TC - O(ElogE)
 @author Amirul Islam (shiningflash)
 *******************************************/

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
#include <limits>

#define mem(x, y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 5001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793
#define INT_MX 2147483647

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

////////////////////////////////////////

const int MX = 105;

struct edge {
	int u, v, w;
	bool operator < (const edge& p) const {
		return w < p.w;
	}
};

vector <edge> g;
int parent[MX];
int nodes, edges, t, tst, u, v, w;

inline int find(int r) {
	return (parent[r] == r) ? r : find(parent[r]);
}

ll kruskal_mst() {
	for (int i = 0; i <= nodes; i++) parent[i] = i;
	int cnt = 0, u, v, w;
	ll tcost = 0;
	for (int i = 0; i < edges; i++) { // edges = g.size()
		u = find(g[i].u);
		v = find(g[i].v);
		if (u != v) {
//			cout << g[i].u << " - " << g[i].v << " " << g[i].w << "\n";
			if (u > v) parent[u] = v;
			else parent[v] = u;
			cnt++;
			tcost += g[i].w;
			if (cnt == nodes) break;
		}
	}
	return tcost;
}

int main() {
	scanf("%d", &tst);
	for (t = 1; t <= tst; t++) {
		g.clear();
		scanf("%d", &nodes);
		edges = 0;
		while (scanf("%d %d %d", &u, &v, &w) && (u || v || w)) {
			edge eg;
			eg.u = u;
			eg.v = v;
			eg.w = w;
			g.pb(eg);
			edges++;
		}
		sort(g.begin(), g.end());
		ll mincost = kruskal_mst();
		reverse(g.begin(), g.end());
		ll maxcost = kruskal_mst();
		printf("Case %d: ", t);
		if ((maxcost + mincost) % 2) printf("%lld/2\n", maxcost + mincost);
		else printf("%lld\n", (maxcost + mincost) / 2);
	}
	return 0;
}

