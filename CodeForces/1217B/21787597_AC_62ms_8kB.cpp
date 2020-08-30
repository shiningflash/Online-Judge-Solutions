#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int t, n, x, d, h;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> d >> h;
            mx1 = max(mx1, d-h);
            mx2 = max(mx2, d);
        }
        if (mx2 >= x) cout << 1 << "\n";
        else if (mx1 == 0) cout << -1 << "\n";
        else cout << ((x - mx2 + mx1 - 1) / mx1) + 1 << "\n";
    }
}