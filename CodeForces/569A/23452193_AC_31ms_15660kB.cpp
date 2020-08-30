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
    
    int t, s, q, n = 0;
    cin >> t >> s >> q;
    while (s < t) n++, s *= q;
    cout << n << "\n";
}
