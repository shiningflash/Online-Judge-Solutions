/*
    Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
 
const int len = 1e5+5;
const int mx = 1e6+5;
const int Mod = 1e9+7;
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ll cnt = 0;
        while (n != 0) {
            if (n % k == 0) n /= k, cnt++;
            else cnt += (n % k), n -= (n % k);
        }
        cout << cnt << endl;
    }
 
    return 0;
}