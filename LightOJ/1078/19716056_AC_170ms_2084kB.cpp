#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n, m;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &m);
        int cnt = 1, d = m;
        while (1) {
            d = d % n;
            if(!d) break;
            d = d * 10 + m;
            cnt++;
        }
        printf("Case %d: %d\n", ++t, cnt);
    }
    return 0;
}