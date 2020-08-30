#include <bits/stdc++.h>
using namespace std;
 
const int mx = 105;
int a[mx], b[mx];
 
int main() {
    //freopen("in.txt", "r", stdin);
    int t, n, k, d, x, m;
    cin >> t;
    while(t--) {
        cin >> n >> k >> d;
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++) cin >> b[i];
        for (int i = 1; i <= (n-d+1); i++) {
            int x = 0;
            memset(a, 0, sizeof(a));
            for (int j = i; j < i+d; j++) {
                if (a[b[j]] == 0) x++;
                a[b[j]] = 1;
            }
            mn = min(mn, x);
        }
        cout << mn << endl;
    }
}