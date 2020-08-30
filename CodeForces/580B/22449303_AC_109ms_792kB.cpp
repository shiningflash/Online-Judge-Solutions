#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define le 100005
#define pii pair<int, int>
 
pii a[le];
 
int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n);
    ll mx = 0, x = 0, l = 0, r = 0;
    for (; l < n; l++) {
        while (r < n && a[r].first < a[l].first + d) {
            x += a[r].second;
            r++;
        }
        mx = max(mx, x);
        x -= a[l].second;
    }
    cout << mx << "\n";
    return 0;
}