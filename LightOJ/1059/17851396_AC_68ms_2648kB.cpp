/***********************
 * Air Ports (LightOJ)
 * @author Amirul Islam
 ***********************/

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

typedef long long ll;
using namespace std;

struct edge { int u, v, w; };
bool comp(edge u, edge v) { return u.w < v.w; }
vector <edge> vec;
int temp[100007];
int t, a, b, n, m, x, w, s, cnt, cost;

int fnc(int n) {
    if (temp[n] == n) return n;
    return temp[n] = fnc(temp[n]);
}

int mst() {
    s = 0; cnt = 0;
    for (int i = 0; i < (int) vec.size(); i++) {
        int u = fnc(vec[i].u);
        int v = fnc(vec[i].v);
        if (u != v) {
            temp[u] = v;
            cnt++;
            s += vec[i].w;
        }
        if (cnt == n-1) break;
    }
    return s;
}

int main() {
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d %d %d", &n, &m, &cost);
        vec.clear();
        for (int j = 1; j <= n; j++) temp[j] = j;
        for (int j = 1; j <= m; j++) {
            scanf("%d %d %d", &a, &b, &w);
            edge eg;
            eg.u = a;
            eg.v = b;
            eg.w = w;
            if (cost > w) vec.push_back(eg);
        }
        sort(vec.begin(), vec.end(), comp);

        x = mst();
        cnt = n - cnt;
        x = x + (cnt * cost);
        printf("Case %d: %d %d\n", i, x, cnt);
    }
    return 0;
}