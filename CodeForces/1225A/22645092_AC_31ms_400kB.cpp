#include <bits/stdc++.h>
using namespace std;
 
const int mx = 1e5+5;
int a[mx];
 
int main() {
    int t, n, x, m;
    cin >> n >> m;
    if (n == m) {
        cout << n << "1 ";
        cout << m << "2\n";
    }
    else if (n + 1 == m) {
        cout << n << " " << m << endl;
    }
    else if (n == 9 && m == 1) cout << 99 << " " << 100 << endl;
    else cout << -1 << endl;
}