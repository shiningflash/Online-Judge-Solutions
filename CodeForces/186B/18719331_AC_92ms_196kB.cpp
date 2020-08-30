#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back

int main() {
    int n, t1, t2, k;
    double r, h, a, b;
    vector < pair < double, int > > v;
    cin >> n >> t1 >> t2 >> k;
    r = (100 - k) / 100.0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        h = max((t1 * a * r + t2 * b), (t1 * b * r + t2 * a));
        v.pb(mp(h, n-i));
    }
    sort(v.begin(), v.end());
    for (int i = n-1; i >= 0; i--) {
        printf("%d %.2lf\n", n+1-v[i].second, v[i].first);
    }
}