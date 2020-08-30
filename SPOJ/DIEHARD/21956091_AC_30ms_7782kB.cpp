#include <bits/stdc++.h>
using namespace std;
#define mx 1010

int dp[mx][mx];

int get_maxtime(int a, int b, int cnt, bool f) {
    if (a <= 0 || b <= 0) return cnt;
    if (dp[a][b] != -1) return dp[a][b];
    if (f) dp[a][b] = max(dp[a][b], get_maxtime(a+3, b+2, cnt+1, !f));
    return dp[a][b] = max(dp[a][b], max(get_maxtime(a-5, b-10, cnt+1, !f), get_maxtime(a-20, b+5, cnt+1, !f)));
}

int main() {
    //freopen("in", "r", stdin);
    int n, a, b;
    for (scanf("%d", &n); n--; ) {
        scanf("%d %d", &a, &b);
        memset(dp, -1, sizeof(dp));
        int ans = get_maxtime(a, b, -1, true);
        printf("%d\n", ans);
    }
}