#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, base;
    cin >> t;
    while (t--) {
        cin >> n >> base;
        int ans = 0;
        char ch;
        while ((ch = getchar()) != '\n') {
            if (ch == ' ') {
                continue;
            }
            ans = ans * base + ch - '0';
            ans = ans % (base - 1);
        }
        cout << n << " " << ans << endl;
    }
    return 0;
}