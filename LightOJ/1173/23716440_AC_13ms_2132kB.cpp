// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI unsigned long long
#define PII pair <int, int>
#define PB push_back

const int len = 1e5+5;
const int PI = acos(-1.0);

LLI dp[51][51][2];
bool vis[51][51][2];

LLI rec(int small, int big, int mark) {
    if (small == 0 && big == 0) return 1uLL;
    if (mark == 1 && big == 0) return 0uLL;
    if (mark == 0 && small == 0) return 0uLL;
    if (vis[small][big][mark]) return dp[small][big][mark];

    LLI tmp = 0;
    vis[small][big][mark] = 1;

    if (mark == 0) {
        for (int i = small; i >= 1; i--)
            tmp += rec(i-1, big+small-i, 1);
    }
    else {
        for (int i = 1; i <= big; i++)
            tmp += rec(small+i-1, big-i, 0);
    }
    return dp[small][big][mark] = tmp;
}

int main() {
    LLI t, cas(0), n, m, ans;
    for (cin >> t; t--; ) {
        cin >> n >> m;
        if (n <= 3) ans = 1;
        else if (m == 1) ans = rec(1, n-3, 0);
        else ans = rec(m-1, n-m, 0);
        cout << "Case " << ++cas << ": " << ans << endl;
    }
    return 0;
}