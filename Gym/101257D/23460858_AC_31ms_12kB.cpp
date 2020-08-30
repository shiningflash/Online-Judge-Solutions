// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const LLI mx = 1e18;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    LLI n, x, y, lo = 0, hi = mx;
    cin >> n >> x >> y;
    
    while (lo <= hi) {
        LLI mid = (lo + hi) / 2;
        if (mid / x + mid / y >= n) hi = mid - 1;
        else lo = mid + 1;
    }
    cout << hi + 1 << "\n";
}
