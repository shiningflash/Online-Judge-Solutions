#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, x;
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &n, &m);
        priority_queue <int> pq;
        queue <pair<int, int> > q;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            q.push(make_pair(x, i));
            pq.push(x);
        }
        int ans(0);
        pair <int, int> pr;
        while (1) {
            pr = q.front(); q.pop();
            if (pq.top() == pr.first) {
                pq.pop(), ans++;
                if (pr.second == m) {
                    printf("%d\n", ans);
                    break;
                }
            } else q.push(pr);
        }
    }
}