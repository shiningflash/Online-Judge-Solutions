#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int tst, t(0), n, u, v, w;
    int left[103], right[103];
    for (scanf("%d", &tst); tst--; ) {
        int ll = 0, rr = 0;
        memset(left, 0, sizeof(left));
        memset(right, 0, sizeof(right));
        for (scanf("%d", &n); n--; ) {
            scanf("%d %d %d", &u, &v, &w);
            if (left[u]==0 && right[v]==0) left[u] = right[v] = 1, ll += w;
            else left[v] = right[u] = 1, rr += w;
        }
        printf("Case %d: %d\n", ++t, min(ll, rr));
    }
    return 0;
}