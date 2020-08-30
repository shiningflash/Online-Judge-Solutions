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
 
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        if (x >= y) cout << "YES\n";
        else {
            if (x % 2 == 0) {
                int p = 3 * x / 2;
                if (p >= y) cout << "YES\n";
                else if (p % 2 == 0 && p >= x+1) cout << "YES\n";
                else if (p % 2 == 1 && p >= x+2) cout << "YES\n";
                else cout << "NO\n";
            }
            else {
                int p = 3 * (x-1) / 2;
                if (p >= y) cout << "YES\n";
                else if (p % 2 == 0 && p >= x+1) cout << "YES\n";
                else if (p % 2 == 1 && p >= x+2) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
 
    return 0;
}