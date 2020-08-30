// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 1e6;
const double pi = acos(-1.0);

PII a[mx];

int main() {
    // freopen("in", "r", stdin);
    
    int n, m, x, y;
    cin >> n >> m;
    int _mx = m;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        if (x + y > _mx) _mx = x + y;
    }
    cout << _mx << endl;
}
