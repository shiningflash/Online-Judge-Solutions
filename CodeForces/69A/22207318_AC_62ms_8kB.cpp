#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    int t, x, y, z, sx = 0, sy = 0, sz = 0;
    for (cin >> t; t--; ) cin >> x >> y >> z, sx += x, sy += y, sz += z; 
    cout << ((sx == 0 && sy == 0 && sz == 0) ?"YES\n" : "NO\n");
    return 0;
}