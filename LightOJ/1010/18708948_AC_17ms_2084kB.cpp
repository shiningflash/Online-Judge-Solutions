#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t = 1, m, n, ans, p;
    for (scanf("%d", &tst); tst--;) {
        scanf("%d %d", &m, &n);
        if (m == 1 || n == 1) ans = m*n;
        else if (m == 2 || n == 2) {
            p = ((m == 2) ? n : m);
            if (p % 4 == 0) ans = p;
            else if (p % 4 == 2) ans = p+2;
            else ans = p+1;
        }
        else ans = ((m * n) + 1) / 2;
        printf("Case %d: %d\n", t++, ans);
    }
}