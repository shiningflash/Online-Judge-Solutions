#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    int n, m, r, x;
    cin >> n >> m >> r;
    int m1 = 2147483647, m2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        m1 = min(m1, x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        m2 = max(m2, x);
    }
    if (m1 >= m2) cout << r << endl;
    else {
        int rem = r % m1;
        int ans = (r / m1);
        ans = ans * m2 + rem;
        cout << max(r, ans) << endl;
    }
}