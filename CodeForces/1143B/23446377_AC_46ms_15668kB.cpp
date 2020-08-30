// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e6+5;
const double pi = acos(-1.0);

int a[mx], b[mx];

int rec(int n) {
    if (n == 0) return 1;
    if (n < 10) return n;
    return max(rec(n / 10) * (n % 10), rec(n / 10 - 1) * 9);
}

int main() {
    // freopen("in", "r", stdin);
    
    int n;
    cin >> n;
    cout << rec(n) << "\n";
}
