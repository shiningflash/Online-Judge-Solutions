/*************************************
 dijkstra approach : TC - O(V^2)
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

const int MX = 505;
int g[MX][MX];
int dis[MX];
bool vis[MX];
int nodes, edges, u, v, w, t, tst, src;

inline int minDistance() {
	int minValue = INT_MX, minIndex = 0;
	for (int i = 0; i < nodes; i++)
		if (!vis[i] && dis[i] < minValue)
			minValue = dis[i], minIndex = i;
	return minIndex;
}

void dijkstra() {
	for (int i = 0; i < nodes; i++)
		dis[i] = INT_MX, vis[i] = false;
	dis[src] = 0;
	for (int i = 0; i < nodes-1; i++) {
		int u = minDistance();
		vis[u] = true;
		for (int v = 0; v < nodes; v++) {
			if (!vis[v] && g[u][v] && dis[u] != INT_MX) {
				dis[v] = min(max(dis[u], g[u][v]), dis[v]);
			}
		}
	}
	printf("Case %d:\n", t);
	for (int i = 0; i < nodes; i++) {
		if (dis[i] == INT_MX) printf("Impossible\n");
		else printf("%d\n", dis[i]);
	}
}

int main() {
	scanf("%d", &tst);
	for (t = 1; t <= tst; t++) {
		scanf("%d %d", &nodes, &edges);
		CLEAR(g);
		for (int i = 0; i < edges; i++) {
			scanf("%d %d %d", &u, &v, &w);
			if (g[u][v] != 0)
				if (g[u][v] < w)
					continue;
			g[u][v] = w;
			g[v][u] = w;
		}
		scanf("%d", &src);
		dijkstra();
	}
	return 0;
}