#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
#define fr first
#define sc second

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x, y;
    cin >> n;
    pii a[n+5];
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a[i] = {x, y};
    }
    sort(a, a+n);
    int ans = min(a[0].fr, a[0].sc);
    for (int i = 1; i < n; i++) {
        int l = min(a[i].fr, a[i].sc);
        int r = max(a[i].fr, a[i].sc);
        ans = (l >= ans ? l : r);
    }
    cout << ans << "\n";
    return 0;
}