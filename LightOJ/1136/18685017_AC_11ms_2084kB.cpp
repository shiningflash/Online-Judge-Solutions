#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t = 1, a, b, ans, x, y;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &a, &b);
        x = ((a % 3 == 2) ? (a / 3) * 2 + 1 : (a / 3) * 2);
        y = ((b % 3 == 2) ? (b / 3) * 2 + 1 : (b / 3) * 2);
        ans = ((a % 3 == 1) ? y - x : y - x + 1);
        printf("Case %d: %d\n", t++, ans);
    }
}