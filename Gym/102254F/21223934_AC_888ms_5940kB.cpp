#include <bits/stdc++.h>
using namespace std;

int par[100005];

int find(int r) {
    return par[r] == 0 ? r : par[r] = find(par[r]);
}

int main() {
    //freopen("in", "r", stdin);
    int n, q, x, u, v;
    string sx, sy;
    map<string, int> mp;
    memset(par, 0, sizeof(par));
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; i++) cin >> sx, mp[sx] = i;
    while (q--) {
        cin >> x >> sx >> sy;
        u = find(mp[sx]);
        v = find(mp[sy]);
        if (x == 1) {
            if (u != v) par[u] = v;
        } else printf("%s\n", u == v ? "yes" : "no");
    }
}
