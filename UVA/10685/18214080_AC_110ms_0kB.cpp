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

#define le 5005
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793
#define INT_MX 2147483647

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

////////////////////////////////////////

int parent[le], tmp[le];
string s, u, v;
int C, R, a, b;

int Find(int r) {
    return (parent[r] == r) ? r : parent[r] = Find(parent[r]);
}

void Union(int a, int b) {
    if (a > b) tmp[a] += tmp[b], parent[b] = a;
    else tmp[b] += tmp[a], parent[a] = b;
}

int main() {
    // freopen("in", "r", stdin);
    while (scanf("%d %d", &C, &R) && C|R) {
        map <string, int> mp;
        for (int i = 1; i <= C; i++) {
            cin >> s;
            mp[s] = i;
            parent[i] = i;
            tmp[i] = 1;
        }

        for (int i = 1; i <= R; i++) {
            cin >> u >> v;
            int a = Find(mp[u]);
            int b = Find(mp[v]);
            if (a != b) Union(a, b);
        }

        int ans(0);
        for (int i = 1; i <= C; i++) {
            ans = max(ans, tmp[i]);
        }
        printf("%d\n", ans);
    }
    return 0;
}

