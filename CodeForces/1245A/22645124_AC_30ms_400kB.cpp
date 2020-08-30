#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair <int, int>
#define PI 3.14159265358979323846264338327950288
 
const int mx = 1e5;
 
int a[mx+5];
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int gcd = __gcd(n, m);
        if (gcd > 1) cout << "Infinite\n";
        else cout << "Finite\n";
    }
    
    return 0;
}