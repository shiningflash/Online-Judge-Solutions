#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6+5;

int a[mx];

int main() {
    //freopen("in.txt", "r", stdin);

    int n, x;
    while (cin >> n && n) {
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int ans = 0;
        for (int i = n-1; i >= 2; i--) {
            int low = 0, hi = i-1;
            while (low < hi) {
                if (a[i] > a[low] + a[hi]) {
                    ans += (hi - low);
                    low++;
                    continue;
                }
                hi--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
