#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t(0), n, x, a[110], ans, i;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d", &n);
        for (i = 1; i <= n; i++) scanf("%d", &a[i]);
        for (i = 1, ans = 0; i <= n; i++) {
            if (a[i] != i) {
                for (int j = i+1; j <= n; j++) {
                    if (a[j] == i) {
                        ans++;
                        swap(a[j], a[i]);
                        break;
                    }
                }
            }
        }
        printf("Case %d: %d\n", ++t, ans);
    }
}