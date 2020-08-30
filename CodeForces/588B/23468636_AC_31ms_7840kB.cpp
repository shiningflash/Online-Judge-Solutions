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
    
    LLI n, ans = 1;
    cin >> n;
    for (LLI i = 2; i*i <= n; i++) {
        bool f = false;
        while (n % i == 0) n /= i, f = true;
        if (f) ans *= i;
    }
    if (n != 1) ans *= n;
    cout << ans << "\n";
}
