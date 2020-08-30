#include <bits/stdc++.h>
using namespace std;

vector <int> prime, g[1001];
int vis[1005], dis[1005];

void sieve() {
    int status[1001] = {0};
    for (int i = 3; i <= sqrt(1001); i += 2)
        if (!status[i])
            for (int j = i*i; j < 1001; j += (i << 1)) status[j] = 1;
    
    prime.push_back(2);
    for (int i = 3; i < 1001; i += 2)
        if (!status[i]) prime.push_back(i);
}

void prime_factor() {
    for (int s = 1; s < 1001; s++)
        for (int j = 0; j < prime.size() && prime[j] < s; j++)
            if (s % prime[j] == 0 && s + prime[j] < 1001)
                g[s].push_back(s + prime[j]);
}

int bfs(int s, int t) {
    memset(vis, 0, sizeof(vis));
    //memset(dis, 0, sizeof(dis));
    vis[s] = 1, dis[s] = 0;
    queue <int> q;
    q.push(s);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u == t) return dis[u];
        for (int i = 0; i < g[u].size(); i++) {
            int v = g[u][i];
            if (!vis[v]) {
                dis[v] = dis[u] + 1;
                vis[v] = 1;
                q.push(v);
            }
        }
    }
    return -1;
}

int main() {
    int tst, cas(0), s, t;
    sieve(); prime_factor();
    while(scanf("%d %d", &s, &t) && s + t != 0) {
        printf("Case %d: %d\n", ++cas, bfs(s, t));
    }
    return 0;
}