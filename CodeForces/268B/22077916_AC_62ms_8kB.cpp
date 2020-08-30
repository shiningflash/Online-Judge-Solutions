#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) ans += n - i + (n - i - 1) * i;
    cout << ans << endl;
    return 0;
}