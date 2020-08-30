#include <bits/stdc++.h>
using namespace std;
#define le 10005
#define pb push_back
#define pii pair<double, double>

bool cmp(pii a, pii b) {
    return a.first > b.first;
}

int main() {
    //freopen("in", "r", stdin);
    int n, m;
    cin >> n;
    pii a[n];

    double v = 0, t = 0, opdis = 0, defdis = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        defdis += v*a[i].second + (.5 * a[i].first * a[i].second);
        v += a[i].first * a[i].second;
    }

    sort(a, a+n, cmp);
    v = 0;
    for (int i = 0; i < n; i++) {
        opdis += v*a[i].second + (.5 * a[i].first * a[i].second);
        v += a[i].first * a[i].second;
    }
    printf("%.1lf\n", opdis - defdis);
    return 0;
}
