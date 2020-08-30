#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, l, r;
    cin >> n >> m;
    int a[n+5];
    a[0] = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], a[i] += a[i-1];
    while (m--) cin >> l >> r, cout << ((a[r] - a[l-1]) % 2 == 0 ? "Sim\n" : "Nao\n");
    return 0;
}