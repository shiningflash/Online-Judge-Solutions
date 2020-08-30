// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 1e6;
const double pi = acos(-1.0);

int a[mx], b[mx], c[mx], z[mx];

int main() {
    // freopen("in", "r", stdin);
    
    int n, x, _mx = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        z[i] = x;
        if (a[x] == 0) a[x] = i;
        b[x] = i;
        c[x]++;
        if (c[x] > _mx) _mx = c[x];
    }
    int m = mx, l, r;
    for (int i = 1; i <= n; i++) {
        if (c[z[i]] == _mx) {
            if (b[z[i]] - a[z[i]] < m) {
                m = b[z[i]] - a[z[i]];
                l = a[z[i]];
                r = b[z[i]];
            }
        }
    }
    cout << l << " " << r << "\n";
}
