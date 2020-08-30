#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    char s[1005][1005];
    int n, m, mx(0), cnt(0);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%s", s[i]);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                if (s[i][j] == '.') cnt++;
                else if (s[i][j] == 'L') mx = max(mx, cnt), cnt = 0;
            }
        }
        else {
            for (int j = m-1; j >= 0; j--) {
                if (s[i][j] == '.') cnt++;
                else if (s[i][j] == 'L') mx = max(mx, cnt), cnt = 0;
            }
        }
    }
    printf("%d\n", mx);
    return 0;
}