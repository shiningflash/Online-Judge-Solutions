/********************************
 bfs approach >> Better Tour : LightOJ
 @author Amirul Islam (shiningflash)
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

const int mx = 50100;
vector <int> g[mx];
bool vis[mx];
int a[mx];
int parent[mx];
int nnn, nodes, edges, x, u, v, n, t, tst;

void bfs(int src) {
	queue <int> q;
	vis[src] = true;
	parent[src] = -1;
	q.push(src);
	while (!q.empty()) {
		u = q.front();
		q.pop();
//		sort(g[u].begin(), g[u].end());
		for (v = 0; v < (int) g[u].size(); v++) {
			x = g[u][v];
			if (!vis[x]) {
				parent[x] = u;
				vis[x] = true;
				q.push(x);
			}
		}
	}
}

void solve() {
	n = a[nnn];
	vector <int> sol;
	while (n != -1) {
		sol.pb(n);
		n = parent[n];
	}
	printf("Case %d:\n", t);
	int len = sol.size();
	for (int i = len-1; i >= 0; i--) {
		printf("%d", sol[i]);
		if (i == 0) continue;
		printf(" ");
	}
	printf("\n");
}

void init() {
	for (int i = 0; i < mx; i++) {
		vis[i] = false;
		g[i].clear();
	}
}

int main() {
	scanf("%d", &tst);
	for (t = 1; t <= tst; t++) {
		scanf("%d", &nnn);
		init();
		for (int i = 1; i <= nnn; i++) {
			scanf("%d", &a[i]);
			if (i == 1) continue;
			u = a[i-1];
			v = a[i];
			g[u].pb(v);
			g[v].pb(u);
		}
		for (int i = 1; i < mx; i++)
			sort(g[i].begin(), g[i].end());
		bfs(a[1]);
		solve();
	}
	return 0;
}
