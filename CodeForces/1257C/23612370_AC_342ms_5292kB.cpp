/*
    Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
 
const int len = 1e5+5;
const int Mod = 1e9+7;
const int mx = 1e5+5;
 
 
int main() {
    //freopen("in", "r", stdin);
    //freopen("in", "w", stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int t, n, x;
    map<int, int> mp;
    cin >> t;
    while (t--) {
        mp.clear();
        int ans = INT_MAX;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            if (mp[x] > 0) {
                ans = min(ans, i - mp[x] + 1);
            }
            mp[x] = i;
        }
        if (ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
 
    return 0;
}