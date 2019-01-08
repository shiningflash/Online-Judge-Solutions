#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, t, a, k, n, req, sum;
    cin >> t;
    for (i = 1; i <= t; i++) {
        sum = 0;
        cin >> n >> k;
        for (j = 1; j <= n; j++) {
            cin >> a;
            sum = sum + a;
        }
        req = (k * (n + 1)) - sum;
        printf("Case %d: %d\n", i, req);
    }
    return 0;
}