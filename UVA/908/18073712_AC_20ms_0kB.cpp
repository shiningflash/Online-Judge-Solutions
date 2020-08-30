
/*************************************
 Re-connecting Computer Sites UVA - 908

 kruskal’s MST approach, TC - O(ElogE)
 @author Amirul Islam (shiningfalsh)
 *************************************/

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
	int u, v, w;
	bool operator < (const edge& p) const {
		return w < p.w;
	}
};

vector <edge> g;
int parent[MX];
int nodes, edges, u, v, w, n, m, k;

inline int find(int r) {
	return (parent[r] == r) ? r : find(parent[r]);
}

inline int kruskal_mst() {
	sort(g.begin(), g.end());
	for (int i = 0; i < MX; i++) parent[i] = i;
	int totalcost = 0;
	for (int i = 0; i < (int) g.size(); i++) {
		int u = find(g[i].u);
		int v = find(g[i].v);
		if (u != v) {
			parent[u] = v;
			totalcost += g[i].w;
		}
	}
	return totalcost;
}

int main() {
	bool fst = true; 
	while (scanf("%d", &n) != EOF) {
		g.clear();
		int ans1 = 0, ans2 = 0;
		for (int i = 0; i < n-1; i++) {
			scanf("%d %d %d", &u, &v, &w);
			edge eg;
			eg.u = u;
			eg.v = v;
			eg.w = w;
			g.push_back(eg);
			ans1 += w;
		}
		for (scanf("%d", &k); k--; ) {
			scanf("%d %d %d", &u, &v, &w);
			edge eg;
			eg.u = u;
			eg.v = v;
			eg.w = w;
			g.push_back(eg);
		}
		for (scanf("%d", &m); m--; ) {
			scanf("%d %d %d", &u, &v, &w);
		}
		ans2 = kruskal_mst();
		if (!fst) printf("\n");
		printf("%d\n%d\n", ans1, ans2);
		fst = false;
	}
	return 0;
}
