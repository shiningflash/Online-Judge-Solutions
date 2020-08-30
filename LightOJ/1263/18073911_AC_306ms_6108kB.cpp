
/*************************************
 Equalizing Money LightOJ - 1263

 dfs approach, TC - O(VlogV)
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

const ll MX = 100002;
ll tk[MX];
bool vis[MX];
vector <ll> g[MX];
ll tstcase, n, m, cnt, sum, u, v;

inline void dfs(int u) {
	vis[u] = true;
	sum += tk[u];
	cnt++;
	for (int i = 0; i < (int) g[u].size(); i++) {
		int v = g[u][i];
		if (!vis[v]) dfs(v);
	}
}

int main() {
	cin >> tstcase;
	for (int t = 1; t <= tstcase; t++) {
		cin >> n >> m;
		for (int i = 0; i <= n; i++) g[i].clear();
		for (int i = 1; i <= n; i++) cin >> tk[i];
		for (int i = 1; i <= m; i++) {
			cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}
		CLEAR(vis);
		bool flg = true;
		set <ll> s;
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
				cnt = 0; sum = 0;
				dfs(i);
				if (sum % cnt) { flg = false; break; }
				else s.insert(sum / cnt);
			}
		}
		if (s.size() == 1 && flg) printf("Case %d: Yes\n", t);
		else printf("Case %d: No\n", t);
	}
	return 0;
}
