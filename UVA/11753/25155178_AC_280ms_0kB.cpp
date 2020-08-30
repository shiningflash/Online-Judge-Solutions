// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define PB push_back

const int mx = 1e5+5;

int a[mx], n, k, t, co(0);

int rec(int cost, int l, int r) {
    if (l >= r) return cost;
    if (cost > k) return INT_MAX;
    if (a[l] == a[r]) return rec(cost, l+1, r-1);
    else return min(rec(cost+1, l+1, r), rec(cost+1, l, r-1));
}

int main() {
    for (cin >> t; t--; ) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        int ret = rec(0, 0, n-1);
        cout << "Case " << ++co << ": ";
        if (ret == 0) cout <<  "Too easy" << endl;
        else if (ret > k) cout << "Too difficult" << endl;
        else cout << ret << endl;
    }
    return 0;
}