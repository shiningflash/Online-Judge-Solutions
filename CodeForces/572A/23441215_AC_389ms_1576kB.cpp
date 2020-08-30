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
    
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    if (a[x] < b[m - y + 1]) cout << "YES\n";
    else cout << "NO\n";
}
