#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, k1, k2, n, ans1 = 0, ans2 = 0;
    cin >> a >> b >> k1 >> k2 >> n;
    int x = a * (k1 - 1) + b * (k2 - 1);
    if (n <= x) ans1 = 0;
    else ans1 = min(n-x, a+b);
    if (k1 < k2) {
        for (int i = 1; i <= a; i++) {
            if (k1 <= n) n -= k1, ans2++;
            else break;
        }
        for (int i = 1; i <= b; i++) {
            //cout << n << " " << ans2 << endl;
            if (k2 <= n) n -= k2, ans2++;
            else break;
        }
    }
    else {
        for (int i = 1; i <= b; i++) {
            if (k2 <= n) n -= k2, ans2++;
            else break;
        }
        for (int i = 1; i <= a; i++) {
            if (k1 <= n) n -= k1, ans2++;
            else break;
        }
    }
    cout << ans1 << " " << ans2 << endl;
}