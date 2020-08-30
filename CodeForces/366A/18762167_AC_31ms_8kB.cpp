#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    int m, n, a, b, c, d, x[5], y[5];
    cin >> m;

    for (int i = 1; i <= 4; i++) {
        cin >> a >> b >> c >> d;
        x[i] = min(a, b);
        y[i] = min(c, d);
    }
    
    for (int i = 1; i <= 4; i++) {
        n = m;
        if (n >= x[i]) n -= x[i];
        if (n >= y[i]) {
            cout << i << " " << x[i] << " " << n << "\n";
            return 0;
        }
    }
    cout << "-1\n";
}