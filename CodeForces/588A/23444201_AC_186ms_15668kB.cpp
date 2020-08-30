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
    
    int n, x, y, mn = INT_MAX, sum = 0;
    for (cin >> n; n--; ) {
        cin >> x >> y;
        mn = min(mn, y);
        sum += (x * mn);
    }
    cout << sum << "\n";
}
