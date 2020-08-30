// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;

int main() {
    LLI n, t;
    for (cin >> t; t--; ) {
        cin >> n;
        LLI x = 0, sq = sqrt(n);
        for (int i = 1; i <= sq; i++) x += (n / i);
        x = x * 2 - sq * sq;
        LLI y = n * n;
        int gcd = __gcd(x, y);
        cout << (x / gcd) << "/" << (y/gcd) << endl;
    }    
    return 0;
}