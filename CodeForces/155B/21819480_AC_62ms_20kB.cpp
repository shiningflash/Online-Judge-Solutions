#include <bits/stdc++.h>
using namespace std;
#define pii pair <int, int>

int main() {
    int n, m(1), x, y;
    cin >> n;
    vector <pii> v;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({y, x});
        m += y;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int ans(0);
    for (int i = 0; i < min(n, m); i++) ans += v[i].second;
    cout << ans << "\n";
}