#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define pii pair <ll, ll>

struct node {
    ll u, w;
    node(ll uu, ll ww) {
        u = uu;
        w = ww;
    }
    bool operator < (const node& p) const {
        return p.w > w;
    }
};

const ll inf = 2e9;
const int mx = 1e5+5;

vector <pii> g1[mx], g2[mx];
ll T, cas(0), n, m, s, t, p;
ll dis1[mx], dis2[mx];

ll max(ll a, ll b) {
    return a > b ? a : b;
}

void dijkstra1(int src) {
    dis1[src] = 0;
    priority_queue <node> q;
    q.push(node(src, dis1[src]));
    while (!q.empty()) {
        node top = q.top();
        q.pop();
        ll u = top.u;
        for (int i = 0; i < g1[u].size(); i++) {
            ll v = g1[u][i].first;
            ll w = g1[u][i].second;
            if (dis1[u] + w < dis1[v]) {
                dis1[v] = dis1[u] + w;
                q.push(node(v, dis1[v]));
            }
        }
    }
}

void dijkstra2(int src) {
    dis2[src] = 0;
    priority_queue <node> q;
    q.push(node(src, dis2[src]));
    while (!q.empty()) {
        node top = q.top();
        q.pop();
        ll u = top.u;
        for (int i = 0; i < g2[u].size(); i++) {
            ll v = g2[u][i].first;
            ll w = g2[u][i].second;
            if (dis2[u] + w < dis2[v]) {
                dis2[v] = dis2[u] + w;
                q.push(node(v, dis2[v]));
            }
        }
    }
}

void solve() {
    ll ans = -1;
    for (int u = 1; u <= n; u++) {
        for (int j = 0; j < g1[u].size(); j++) {
            ll v = g1[u][j].first;
            ll w = g1[u][j].second;
            if (dis1[u] + dis2[v] + w <= p) ans = max(ans, w);
        }
    }
    printf("Case %lld: %lld\n", ++cas, ans);
}

int main() {
    //freopen("in", "r", stdin);
    ll u, v, w;
    for (scanf("%lld", &T); T--; ) {
        scanf("%lld %lld %lld %lld %lld", &n, &m, &s, &t, &p);
        for (int i = 1; i <= n; i++) {
            g1[i].clear();
            g2[i].clear();
            dis1[i] = inf;
            dis2[i] = inf;
        }
        while (m--) {
            scanf("%lld %lld %lld", &u, &v, &w);
            g1[u].pb(mp(v, w));
            g2[v].pb(mp(u, w));
        }
        dijkstra1(s);
        dijkstra2(t);
        solve();
    }
}