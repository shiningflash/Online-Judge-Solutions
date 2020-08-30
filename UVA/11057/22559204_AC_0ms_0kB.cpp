/*
    Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>

const int len = 1e5+5;
const int mx = 1e6+5;
const int Mod = 1e9+7;

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n, dif, m, x, tot, a[len], ans[3];
    while (scanf("%d", &n) != EOF) {
        vector <bool> b(1000005);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]), b[a[i]] = 1;
        scanf("%d", &tot);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            x = abs(tot - a[i]);
            if (b[x]) {
                dif = abs(a[i] - x);
                if (dif < mn) {
                    mn = dif;
                    ans[0] = x;
                    ans[1] = a[i];
                }
            }
        }
        sort(ans, ans+2);
        printf("Peter should buy books whose prices are %d and %d.\n\n", ans[0], ans[1]);
    }

    return 0;
}