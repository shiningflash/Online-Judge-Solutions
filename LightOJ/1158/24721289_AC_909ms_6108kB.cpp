#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int dp[1<<10][1005], n, d, cas(0);
string s;

int rec(int mask, int mod) {
    if (mask == ((1 << n) - 1)) return (mod == 0);
    if (dp[mask][mod] != -1) return dp[mask][mod];
    bool vis[20];
    memset(vis, 0, sizeof(vis));
    int ret = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[s[i]-'0'] && !(mask & (1<<i))) {
            vis[s[i]-'0'] = 1;
            ret += rec((mask | (1<<i)), ((mod * 10  + (s[i] - '0')) % d));
        }
    }
    return dp[mask][mod] = ret;
}

void solve() {
    memset(dp, -1, sizeof(dp));
    cin >> s >> d;
    // cout << s << " " << d << endl;
    n = s.size();
    // cout << n << endl;
    cout << "Case " << ++cas << ": " << rec(0, 0) << endl;
}

int main() {
    int t;
    for (cin >> t; t--; ) solve();
    return 0;
}
