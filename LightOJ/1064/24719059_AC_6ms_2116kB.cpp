#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[25][155];
int n, x, cas(0);

ll rec(int i, int ret) {
    if (i == n) return (ret >= x);
    if (dp[i][ret] != -1) return dp[i][ret];
    ll res = 0LL;
    for (int j = 1; j <= 6; j++) res += rec(i+1, ret+j);
    return dp[i][ret] = res;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> x;
    ll res = rec(0, 0);
    ll allpossible = 1;
    for (int i = 1; i <= n; i++) allpossible *= 6LL;
    ll gcd = __gcd(res, allpossible);
    res /= gcd;
    allpossible /= gcd;
    cout << "Case " << ++cas << ": ";
    if (allpossible == 1) cout << res << endl;
    else cout << res << "/" << allpossible << endl;
}

int main() {
    int t;
    for (cin >> t; t--; ) solve();
    return 0;
}
