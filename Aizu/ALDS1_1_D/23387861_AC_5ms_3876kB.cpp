#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int _mx = 2e6;
int a[_mx+5];

int main() {
    // freopen("in.txt", "r", stdin);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int mn = a[0], mx = -1100000000;
    for (int i = 1; i < n; i++) {
        mx = max(mx, a[i] - mn);
        mn = min(mn, a[i]);
    }
    cout << mx << endl;

    return 0;
}
