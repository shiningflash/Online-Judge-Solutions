// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI unsigned long long int
#define PII pair <int, int>
#define PB push_back

const int len = 1e5+5;
const int PI = acos (-1.0);

string s;
int vis[71][71];
LLI t, cas(0), dp[71][71];

int tot_R(char a, char b, char c) {
    // cout << a << b << c << " = ";
    // cout << (a == 'R') + (b == 'R') + (c == 'R') << endl;
    return (a == 'R') + (b == 'R') + (c == 'R');
}

LLI dfs(int st, int en) {
    if (vis[st][en] == cas) return dp[st][en];
    if (st > en) return dp[st][en] = 1;
    vis[st][en] = cas;

    LLI ret = 0;

    for (int i = st+1; i <= en; i += 3)
        for (int j = i+1; j <= en; j += 3)
            if (tot_R(s[st], s[i], s[j]) < 2)
                ret += ( dfs(st+1, i-1) *
                         dfs(i+1, j-1) *
                         dfs(j+1, en) );
    return dp[st][en] = ret;
}

int main() {
    // freopen("in", "r", stdin);
    for (cin >> t; t--; ) {
        cin >> s;
        cout << "Case " << ++cas << ": ";
        cout << dfs(0, s.size()-1) << "\n";
    }
    return 0;
}