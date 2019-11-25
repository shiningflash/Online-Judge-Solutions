// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;
LLI a[mx+5];

int main() {
    
    // freopen("in", "r", stdin);
 
    LLI m, tot = 0;
    LLI n, q, x, l, r;
    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    while (q--) {
        cin >> x;
        if (x == 1) cin >> m, tot += m;
        else {
            cin >> l >> r >> m;
            l += tot, r += tot;
            int pos1 = lower_bound(a, a+n, l) - a;
            int pos2 = upper_bound(a, a+n, r) - a;
            if (pos2 - pos1 < m) cout << -1 << endl;
            else cout << a[pos1+m-1] - tot << endl;
        }
    }
}