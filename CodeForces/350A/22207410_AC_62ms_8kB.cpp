#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, x, mx_a = INT_MIN, mn_a = INT_MAX, mn_b = INT_MAX;
    cin >> n >> m;
    while (n--) cin >> x, mx_a = max(mx_a, x), mn_a = min(mn_a, x);
    while (m--) cin >> x, mn_b = min(mn_b, x);
    int ans = max(2*mn_a, mx_a);
    cout << (ans >= mn_b ? -1 : ans) << "\n";
    return 0;
}