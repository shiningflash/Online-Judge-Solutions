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
	string u, v;
	int w;
	bool operator < (const edge &p) const {
		return w < p.w;
	}
};

set <string> s;
vector <edge> g;
string u, v;
int nodes, edges, city, w, t, tst;
map <string, string> parent;

string find(string r) {
	return (parent[r] == r) ? r : find(parent[r]);
}

int kruskal_mst() {
	sort(g.begin(), g.end());
	int sum = 0, cnt = 0;
	for (int i = 0; i < g.size(); i++) {
		u = find(g[i].u);
		v = find(g[i].v);
		if (u != v) {
			parent[v] = u;
			sum += g[i].w;
			cnt++;
		}
		if (cnt == city-1) return sum;
	}
	return -1;
}

inline void sol() {
	city = s.size();
	set <string> :: iterator it;
	for (it = s.begin(); it != s.end(); it++)
		parent[*it] = *it;
	printf("Case %d: ", t);
	int ans = kruskal_mst();
	if (ans == -1) printf("Impossible\n");
	else printf("%d\n", ans);
}

int main() {
	scanf("%d", &tst);
	for (t = 1; t <= tst; t++) {
		scanf("%d", &edges);
		parent.clear();
		g.clear();
		s.clear();
		for (int i = 0; i < edges; i++) {
			cin >> u >> v >> w;
			edge eg;
			s.insert(u);
			s.insert(v);
			eg.u = u;
			eg.v = v;
			eg.w = w;
			g.pb(eg);
		}
		sol();
	}
	return 0;
}
