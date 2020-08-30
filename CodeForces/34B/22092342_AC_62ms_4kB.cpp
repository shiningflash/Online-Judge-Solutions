#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, ans(0), m, x;
    cin >> n >> m;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0) v.push_back(-1*x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    if (v.size() < m) m = (int) v.size();
    for (int i = 0; i < m; i++) ans += v[i];
    cout << ans << "\n";
    return 0;
}