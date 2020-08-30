#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, base;
    scanf("%d", &t);
    while (t--) {
        cin >> n >> base;
        int ans = 0;
        char ch;
        while ((ch = getchar()) != '\n') {
            if (ch == '\n' || ch == ' ') {
                continue;
            }
            ans = ans * base + ch - '0';
            ans = ans % (base - 1);
        }
        cout << n << " " << ans << endl;
    }
    return 0;
}