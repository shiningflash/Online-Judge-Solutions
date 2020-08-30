// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
const int mx = 1e5;
const double pi = acos(-1.0);
 
int main() {
    // freopen("in", "r", stdin);
    
    int t, n, x;
    for (cin >> t; t--; ) {
        cin >> n >> x;
        int ans = 0;
        if (x) ans += (60 - x) + (23 - n) * 60;
        else ans += (24 - n) * 60;
        cout << ans << endl;
    }
}