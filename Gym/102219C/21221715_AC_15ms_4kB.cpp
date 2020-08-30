#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, cas(0), a, b, c, d;
    for (scanf("%d", &x); x--; ) {
        scanf("%d %d", &a, &b);
        int ans = -1;
        while (a--) {
            scanf("%d %d", &c, &d);
            ans = d <= b ? max(ans, c) : max(ans, c-d+b);
        }
        printf("Case #%d: %d\n", ++cas, ans);
    }
}
