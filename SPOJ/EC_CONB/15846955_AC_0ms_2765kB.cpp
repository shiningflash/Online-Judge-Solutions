#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        ll ans = 0;
        cin >> n;
        if (n % 2 != 0) {
            cout << n << endl;
        }
        else {
            while(n != 0) {
                ans *= 2;
                ans += (n & 1);
                n /= 2;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
