#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans(0), m, x;
    scanf("%d %d", &n, &m);
    vector <int> v;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x < 0) v.push_back(-1*x);
    }
    sort(v.begin(), v.end(), greater<int>());
    if (v.size() < m) m = (int) v.size();
    for (int i = 0; i < m; i++) ans += v[i];
    printf("%d\n", ans);
    return 0;
}