#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

int main() {
    //freopen("in", "r", stdin);
    
    int n, x, r = -1;
    LLI ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x) {
            if (r != -1) {
                ans *= (i - r);
            }
            r = i;
        }
    }
    if (r == -1) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}