// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
const int mx = 1e5;
const double pi = acos(-1.0);
 
int main() {
    // freopen("in", "r", stdin);
    
    int t, n, x, k;
    for (cin >> t; t--; ) {
        cin >> n >> k;
        int ans;
        if (n % k == 0) {
            ans = n;
        }
        else {
            x = n / k;
            if (k % 2 == 0) ans = x * (k / 2);
            else ans = x * ((k / 2) + 1), k--;
            k /= 2;
            n -= ans;
            ans += min(n, k * (x+1));
        }
        cout << ans << endl;
    }
}