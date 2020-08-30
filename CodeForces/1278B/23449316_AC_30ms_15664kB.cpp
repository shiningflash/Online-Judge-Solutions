// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e6+5;
const double pi = acos(-1.0);

int a[mx], b[mx];

int main() {
    // freopen("in", "r", stdin);
    
    LLI n, p, q, x, y, i;
    for (cin >> n; n--; ) {
        cin >> p >> q;
        x = min(p, q);
        y = max(p, q);
        if (x == y) cout << "0\n";
        else {
            for (i = 1; ; i++) {
                x += i;
                if (x == y) break;
                else if (x > y) {
                    if ((x - y) % 2 == 0) break;
                }
            }
            cout << i << "\n";
        }
    }
}
