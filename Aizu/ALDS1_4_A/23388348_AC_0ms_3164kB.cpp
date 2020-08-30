#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int _mx = 2e6;
int a[_mx+5];

int main() {
    // freopen("in.txt", "r", stdin);

    int n, q, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (cin >> q; q--; ) {
        cin >> x;
        int pos = lower_bound(a, a+n, x) - a;
        if (a[pos] == x) ans++;
    }
    cout << ans << endl;

    return 0;
}
