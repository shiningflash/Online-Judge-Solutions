#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10000
 
int main() {
    //freopen("in", "r", stdin);
    int t, n, m, l, r, x;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int a[m+5];
        int ans(0);
        a[m] = 0;
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 1; i < m; i+=2) if (a[i] + 1 - a[i+1] > 2) ans++, a[i] = a[i+1] + 1, i--;
        cout << ans << endl;
    }
    return 0;
}