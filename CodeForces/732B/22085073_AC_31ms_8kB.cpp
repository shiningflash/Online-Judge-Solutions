#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k, ans(0), x;
    cin >> n >> k;
    int a[n+5];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n-1; i++) {
        if (a[i] + a[i+1] < k) x = k - a[i] - a[i+1], a[i+1] += x, ans +=x;
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        cout << (i == n-1 ? "\n" : " ");
    }
    return 0;
}