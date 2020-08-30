#include <bits/stdc++.h>
using namespace std;
#define mx 1005
#define pr pair<int, int>

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n, m, x, t, cas(0);
    for (scanf("%d", &t); t--; ) {
        queue<pr> q;
        priority_queue<int> pq;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) scanf("%d", &x), q.push({x, i}), pq.push(x);
        int ans(0);
        while (1) {
            pr z = q.front(); q.pop();
            if (z.first == pq.top()) {
                pq.pop(); ans++;
                if (z.second == m) {
                    printf("%d\n", ans);
                    break;
                }
            }
            else q.push(z);
        }
    }
    return 0;
}
