// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PB push_back

const int mx = 2e5+5;

void FILEREAD() {
    freopen("in.txt", "r", stdin);
}

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

LLI a[mx], dp[mx];

int main() {
    // FILEREAD();
    FASTIO();

    LLI n, x, m = 0;
    for (cin >> n; n--; ) {
        cin >> x;
        a[x]++;
        m = max(m, x);
    }
    for (LLI i = 1; i <= m+1; i++) {
        if (a[i]) dp[i] = dp[i-2] + a[i] * i;
        if (dp[i-1] > dp[i]) dp[i] = dp[i-1];
    }
    cout << dp[m+1] << endl;
    return 0;
}
