// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e5+5;
const double pi = acos(-1.0);

int a[mx], b[mx];

int main() {
    // freopen("in", "r", stdin);
    
    int n, x = 0, y = 0, z;
    for (cin >> n; n--; ) {
        cin >> z;
        if (z & 1) a[x++] = z;
        else b[y++] = z;
    }
    int sum = 0, mn = min(x, y);
    sort(a, a+x);
    sort(b, b+y);
    for (int i = x - mn - 2; i >= 0; i--) sum += a[i];
    for (int i = y - mn - 2; i >= 0; i--) sum += b[i];
    cout << sum << endl;
}
