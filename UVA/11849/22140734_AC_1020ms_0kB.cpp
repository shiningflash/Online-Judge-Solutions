#include <bits/stdc++.h>
using namespace std;
#define mx 1000005

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n, m, x;
    scanf("%d %d", &n, &m);
    while (n && m) {
        int ans(0);
        map<int, int> mp;
        for (int i = 0; i < n; i++) scanf("%d", &x), mp[x]++;
        for (int i = 0; i < m; i++) {
            scanf("%d", &x);
            if (mp[x]) ans++;
        }
        printf("%d\n", ans);
        scanf("%d %d", &n, &m);
    }
    return 0;
}
