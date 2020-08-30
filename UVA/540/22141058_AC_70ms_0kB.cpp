#include <bits/stdc++.h>
using namespace std;
#define mx 1005

map<int, int> mp;

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n, m, x, t, cas(0);
    string s;
    while (scanf("%d", &n) && n) {
        mp.clear();
        for (int i = 0; i < n; i++) {
            scanf("%d", &m);
            while (m--) scanf("%d", &x), mp[x] = i;
        }
        queue<int> q, nq[mx];
        printf("Scenario #%d\n", ++cas);
        while (cin >> s && s[0] != 'S') {
            if (s[0] == 'E') {
                scanf("%d", &x);
                int z = mp[x];
                if (nq[z].empty()) q.push(z);
                nq[z].push(x);
            }
            else {
                int z = q.front();
                printf("%d\n", nq[z].front());
                nq[z].pop();
                if (nq[z].empty()) q.pop();
            }
        }
        puts("");
    }
    return 0;
}
