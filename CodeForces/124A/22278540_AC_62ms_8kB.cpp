#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, a, b, ans(0);
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) if (i - 1 >= a && n - i <= b) ans++;
    cout << ans << "\n";
    return 0;
}