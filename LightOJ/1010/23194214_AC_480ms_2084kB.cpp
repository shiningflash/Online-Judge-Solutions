#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int cas(0), t, n, m;
    for (cin >> t; t--; ) {
        cin >> m >> n;
        cout << "Case " << ++cas << ": ";
        if (m == 1 || n == 1) cout << m*n << endl;
        else if (m == 2 || n == 2) {
            if (n == 2) n = m;
            if (n % 4 == 0) cout << n << endl;
            else if (n % 4 == 2) cout << n+2 << endl;
            else cout << n+1 << endl;
        }
        else cout << (n*m+1)/2 << endl;
    }
    return 0;
}
