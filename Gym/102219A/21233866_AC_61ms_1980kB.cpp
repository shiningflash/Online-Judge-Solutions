#include <bits/stdc++.h>
using namespace std;
#define N 1005

map <char, char> mp;
char str[N][N], ans[N][N], s[N];

void mapping() {
    mp['.'] = '.';
    mp['<'] = '^';
    mp['^'] = '>';
    mp['>'] = 'v';
    mp['v'] = '<';
}

int main() {
    //freopen("in", "r", stdin);
    int n, r(0);
    mapping();

    scanf("%d %s", &n, &s);
    for (int i = 0; s[i]; i++) (s[i] == 'L') ? r-- : r++;
    r %= 4, r += 4, r %= 4;

    for (int i = 1; i <= n; i++) scanf("%s", str[i]+1);

    while (r--) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                ans[j][n-i+1] = mp[str[i][j]];
        }
        memcpy(str, ans, sizeof(ans));
    }
    for (int i = 1; i <= n; i++) puts(str[i]+1);
}
