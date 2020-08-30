/**********************************
 kruskal’s approach : TC - O(ElogE)
 @author Amirul Islam (shiningflash)
 **********************************/

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
#define INT_MAX 2147483647

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

////////////////////////////////////////

const int MX = 55;

struct edge {
	int u, v, w;
	bool operator < (const edge& p) const {
		return w < p.w;
	}
};

vector <edge> g;
int parent[MX];
int nodes, edges;

inline int find(int r) {
	return (parent[r] == r) ? r : find(parent[r]);
}

int kruskal_mst() {
	sort(g.begin(), g.end());
	for (int i = 0; i < nodes; i++) parent[i] = i;
	int cnt = 0, tcost = 0, u, v, w;
	for (int i = 0; i < g.size(); i++) {
		u = find(g[i].u);
		v = find(g[i].v);
		if (u != v) {
			parent[u] = v;
			cnt++;
			tcost += g[i].w;
			if (cnt == nodes-1) break;
		}
	}
	if (cnt == nodes-1) return tcost;
	return -1;
}

int main() {
	int t, tst, wt;
	scanf("%d", &tst);
	for (t = 1; t <= tst; t++) {
		g.clear();
		int sum = 0;
		scanf("%d", &nodes);
		for (int i = 0; i < nodes; i++) {
			for (int j = 0; j < nodes; j++) {
				scanf("%d", &wt);
				sum += wt;
				if (wt == 0) continue;
				if (i != j)	{
					edge eg;
					eg.u = i;
					eg.v = j;
					eg.w = wt;
					g.pb(eg);
				}
			}
		}
		int tcost = kruskal_mst();
		printf("Case %d: ", t);
		if (tcost == -1) printf("-1\n");
		else printf("%d\n", sum - tcost);
	}
	return 0;
}
