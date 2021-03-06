#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int a[15][15], dp[1<<15], n, x, cas(0);

int rec(int mask) {
    if (__builtin_popcount(mask) == n) return 0;
    int ret = INT_MAX;
    if (dp[mask] != -1) return dp[mask];
    for (int i = 0; i < n; i++) {
        if (!(mask & (1<<i))) {
            int sum = a[i][i];
            for (int j = 0; j < n; j++) {
                if (mask & (1<<j)) sum += a[i][j];
            }
            ret = min(ret, sum + rec((mask | (1<<i))));
        }
    }
    return dp[mask] = ret;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    memset(dp, -1, sizeof(dp));
    x = (1 << n) - 1;
    cout << "Case " << ++cas << ": " << rec(0) << endl;
}

int main() {
    int t;
    for (cin >> t; t--; ) solve();
    return 0;
}
