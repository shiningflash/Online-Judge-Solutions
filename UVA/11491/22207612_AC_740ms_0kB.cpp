#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m;
    while (cin >> n >> m && (n+m)) {
        string s, ans = "";
        cin >> s;
        int pos(0);
        for (int i = n-m; i--; ) {
            int mx = -1;
            for (int j = pos; j < n - i; j++) {
                if (mx < s[j]) mx = s[j], pos = j+1;
            }
            ans += mx;
        }
        cout << ans << "\n";
    }
    return 0;
}