#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    //freopen("in.txt", "r", stdin);
    LLI cas(0), t, n, m, x;
    for (cin >> t; t--; ) {
        cin >> n;
        cout << "Case " << ++cas << ": ";
        if (n % 2 == 1) cout << "Impossible" << endl;
        else {
            for (LLI i = 2; i <= n; i += 2) {
                if (n % i == 0 && (n/i) % 2 == 1) {
                    cout << (n/i) << " " << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
