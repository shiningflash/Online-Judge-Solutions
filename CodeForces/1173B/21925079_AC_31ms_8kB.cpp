#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int n;
    cin >> n;
    int m = n / 2 + 1;
    cout << m << "\n";
    for (int i = 1; i <= m; i++) cout << 1 << " " << i << "\n";
    for (int i = m + 1, j = 2; i <= n; i++, j++) cout << j << " " << m << "\n";
    return 0;
}