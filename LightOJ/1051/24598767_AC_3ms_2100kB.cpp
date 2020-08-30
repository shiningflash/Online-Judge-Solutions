#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[55][6][4], t = 0, len;
string s;

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int ok(int p, int c, int v) {
    if (c == 5 || v == 3) return 0;
    if (p == len) return 1;
    ll &ret = dp[p][c][v];
    if (ret != -1) return dp[p][c][v];
    if (isVowel(s[p])) return ret = ok(p+1, 0, v+1);
    else if (s[p] == '?') {
        int tmp1 = ok(p+1, 0, v+1);
        int tmp2 = ok(p+1, c+1, 0);
        if (tmp1 == tmp2) return ret = tmp1;
        else return 2;
    }
    else return ret = ok(p+1, c+1, 0);
}

void solve() {
    cin >> s;
    len = s.length();
    int ans = ok(0, 0, 0);
    cout << "Case " << ++t << ": ";
    if (ans == 0) cout << "BAD" << endl;
    else if (ans == 1) cout << "GOOD" << endl;
    else cout << "MIXED" << endl;
}

int main() {
    //freopen("in.txt", "r", stdin);
    int n;
    for (cin >> n; n--; ) memset(dp, -1, sizeof(dp)), solve();
    return 0;
}
