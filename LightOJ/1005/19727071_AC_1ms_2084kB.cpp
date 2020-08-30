#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n, m;
    for (scanf("%d", &tst); tst--; ) {
        unsigned long long int ans(1);
        scanf("%d %d", &n, &m);
        if (m > n) ans = 0;
        else {
            for (int i = 1; i <= m; i++) {
                ans = ans * n * n / i;
                n--;
            }
        }
        printf("Case %d: %llu\n", ++t, ans);
    }
    return 0;
}