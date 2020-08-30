#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n, m;
    for (scanf("%d", &tst); tst--; ) {
        int ans(0);
        map <int, int> mp;
        for (scanf("%d", &n); n--; ) {
            scanf("%d", &m);
            if (mp[m] == 0) mp[m] = m+1, ans += (m+1);
            mp[m]--;
        }
        printf("Case %d: %d\n", ++t, ans);
    }
    return 0;
}