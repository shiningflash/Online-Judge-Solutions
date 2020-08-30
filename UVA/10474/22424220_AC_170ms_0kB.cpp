#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int n, q, x, z, cas(0);
    while (cin >> n >> q && (n + q)) {
        vector <int> v;
        for (int i = 0; i < n; i++) cin >> x, v.push_back(x);
        sort(v.begin(), v.end());
        printf("CASE# %d:\n", ++cas);
        while (q--) {
            cin >> z;
            int pos = lower_bound(v.begin(), v.end(), z) - v.begin();
            if (v[pos] == z) printf("%d found at %d\n", z, pos+1);
            else printf("%d not found\n", z);
        }
    }
}
