#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>

int n, t, u, v;
bool vis[1000007];
queue <pi> q;

void bfs(pi &ff) {
    u = ff.first;
    v = ff.second;
    for (int i = 2; i <= sqrt(u); i++) {
        if (u % i == 0) {
            int vv = max(i, u/i);
            if (!vis[vv]) {
                vis[vv] = 1;
                q.push({vv, v+1});
            }
        }
    }
    if (u && !vis[u-1]) {
        vis[u-1] = 1;
        q.push({u-1, v+1});
    }
}

int main() {
    cin >> t;
    while (t--) {
        memset(vis, 0, sizeof(vis));
        int m = 0;
        cin >> n;
        q = {};
        q.push({n, 0});
        while (!q.empty()) {
            pi ff = q.front();
            q.pop();
            if (!ff.first) {
                m = ff.second;
                break;
            }
            bfs(ff);
        }
        printf("%d\n", m);
    }
    return 0;
}