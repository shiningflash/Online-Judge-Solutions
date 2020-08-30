// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back
 
const int len = 1e5+5;
const int PI = acos (-1.0);
 
int f(int m, int n) {
    return (m >= 1 && m <= n);
}
 
int main() {
    // freopen("in", "r", stdin);
    int n, x, ans = 0;
    cin >> n >> x;
    for (int i = 1; i*i <= x; i++) {
        if (x % i == 0) {
            bool z = f(i, n) && f(x/i, n);
            if (z) {
                ans++;
                if (i*i != x) ans++;
            }
        }
    }
    cout << ans << endl;
}