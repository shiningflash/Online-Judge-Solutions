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

const int MX = 1005;
int n, m, x, y, u, v;
int a[MX];

int main() {
	// freopen("in", "r", stdin);
	scanf("%d %d", &n, &m);
	memset(a, 0, sizeof(a));
	while (m--) {
		scanf("%d %d", &u, &v);
		a[u] = a[v] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (!a[i]) { y = i; break; }
	}
	printf("%d\n", n-1);
	for (int i = 1; i <= n; i++) {
		if (i != y) printf("%d %d\n", i, y);
	}
	return 0;
}

