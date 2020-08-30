#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10000
 
int main() {
    ll n, m, t, a, b;
    for (cin >> t; t--; ) {
        cin >> a >> b;
        if (a - b == 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
