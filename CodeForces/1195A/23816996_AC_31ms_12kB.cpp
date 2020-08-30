#include <bits/stdc++.h>
using namespace std;

int a[1005];

int main() {
    int n, k, x, ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> x, a[x]++;
    for (int i = 1; i <= k; i++) if (a[i] % 2) ans++;
    cout << (n - (ans >> 1)) << endl;
}