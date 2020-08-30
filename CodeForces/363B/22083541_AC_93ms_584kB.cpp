#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k, x, mx(0), ans(1);
    cin >> n >> k;
    int a[n+5];
    for (int i = 1; i <= k; i++) cin >> a[i], mx += a[i];
    int sum = mx;
    for (int i = k+1; i <= n; i++) {
        cin >> a[i];
        sum += a[i] - a[i-k];
        if (sum < mx) mx = sum, ans = i-k+1;
    }
    cout << ans << endl;
    return 0;
}