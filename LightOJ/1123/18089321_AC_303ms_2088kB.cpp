/********************************
 kruskal’s MST approach, TC - O(ElogE)
 @author Amirul Islam (shiningfalsh)
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
#include <limits>
#include <bits/stdc++.h>

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

struct edge {
	int u, v, w;
	bool operator < (const edge &p) const {
		return w < p.w;
	}
};

vector <edge> g;
int nodes, edges, u, v, w, t, tst;
int parent[205];

inline int find(int r) {
	return (parent[r] == r) ? r : find(parent[r]);
}

ll kruskal_mst() {
	for (int i = 0; i <= nodes; i++) parent[i] = i;
	sort(g.begin(), g.end());
	ll sum = 0;
	int cnt = 0;
	vector <edge> tmp;
	for (int i = 0; i < g.size(); i++) {
		u = find(g[i].u);
		v = find(g[i].v);
		if (u != v) {
			parent[u] = v;
			sum += g[i].w;
			cnt++;
			tmp.pb(g[i]);
			if (cnt == nodes-1) break;
		}
	}
	g.clear();
	g = tmp;
	if (cnt == nodes-1) return sum;
	return -1;
}

int main() {
	scanf("%d", &tst);
	for (t = 1; t <= tst; t++) {
		scanf("%d %d", &nodes, &edges);
		g.clear();
		printf("Case %d:\n", t);
		for (int i = 0; i < edges; i++) {
			scanf("%d %d %d", &u, &v, &w);
			g.pb({u, v, w});
			ll ans = kruskal_mst();
			printf("%lld\n", ans);
		}
	}
	return 0;
}
