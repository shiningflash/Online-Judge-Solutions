#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
const int mx = 1e5+5;
 
int a[mx];
 
int main() {
    int n, k;
    cin >> n >> k;
    double ans = 0, x1, x2;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    
    for (int i = 0; i < n; i++) {
        if (i == 0) x1 = a[i];
        else x1 = (double) (a[i] - a[i-1]) / 2.0;
        
        if (i == n-1) x2 = k-a[i];
        else x2 = (double) (a[i+1] - a[i]) / 2.0;
        
        ans = max(ans, max(x1, x2));
    }
    cout << setprecision(9) << ans << "\n";
}