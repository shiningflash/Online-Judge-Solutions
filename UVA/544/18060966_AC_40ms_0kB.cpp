/*********************************
 Heavy Cargo : UVA - 544

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

const int MX = 1e7;

struct edge {
	string u, v;
	int w;
	bool operator < (const edge& p) const {
		return w > p.w;
	}
};

vector <edge> g;
int nodes, edges;
map <string, string> parent;

inline string find(string r) {
	return (parent[r] == "") ? r : find(parent[r]);
}

inline int kruskal_mst(string src, string dst) {
	sort(g.begin(), g.end());
	int mn = INT_MX, w;
	string u, v;
	for (int i = 0; i < edges; i++) {
		u = find(g[i].u);
		v = find(g[i].v);
		if (u != v) {
			parent[u] = v;
			mn = min(mn, g[i].w);
		}
		if (find(src) == find(dst)) break;
	}
	return mn;
}

int main() {
	int t = 1;
	while (scanf("%d %d", &nodes, &edges) && nodes && edges) {
		parent.clear();
		g.clear();
		for (int i = 0; i < edges; i++) {
			string u, v;
			int w;
			cin >> u >> v >> w;
			edge eg;
			eg.u = u;
			eg.v = v;
			eg.w = w;
			g.pb(eg);
		}
		string src, dst;
		cin >> src >> dst;
		printf("Scenario #%d\n", t++);
		printf("%d tons\n\n", kruskal_mst(src, dst));
	}
	return 0;
}
