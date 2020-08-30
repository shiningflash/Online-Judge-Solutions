#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
const int mx = 1e5+5;
 
int a[mx];
 
void maxSubArrSum(LLI n, LLI sum) {
    LLI gmax = INT_MIN, cmax = 0, s = 0, e = 0, x = 0;
    for (int i = 0; i < n; i++) {
        cmax += a[i];
        if (gmax < cmax) gmax = cmax, s = x, e = i;
        if (cmax <= 0) cmax = 0, x = i+1;
    }
    if (sum > gmax) cout << "YES\n";
    else if (sum == gmax) {
        if (s == 0 && e == n-1) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
}
 
int main() {
    LLI t, n, x;
    for (cin >> t; t--; ) {
        cin >> n;
        LLI sum = 0;
        for (int i = 0; i < n; i++) cin >> a[i], sum += a[i];
        maxSubArrSum(n, sum);
    }
}