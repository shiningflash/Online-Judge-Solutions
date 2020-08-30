#include <bits/stdc++.h>
using namespace std;

int dp[10005];

int rec(int n) {
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];
    int ret = INT_MAX;
    for (int i = 1; i * i <= n; i++) {
        ret = min(ret, rec(n - i*i) + 1);
    }
    return dp[n] = ret;
}

void solve() {
    int n;
    cin >> n;
    cout << rec(n) << endl;
}

int main() {
    int t;
    memset(dp, -1, sizeof(dp));
    for (cin >> t; t--; ) solve();
    return 0;
}
