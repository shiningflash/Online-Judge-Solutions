#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int n, m, a[200005], mx = INT_MIN, gcd = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        mx = max(mx, a[i]);
        if (i > 0) gcd = __gcd(gcd, abs(a[0] - a[i]));
    }
    long long int x = 0;
    for (int i = 0; i < n; i++) x += ((mx - a[i]) / gcd);
    printf("%lld %d\n", x, gcd);
}