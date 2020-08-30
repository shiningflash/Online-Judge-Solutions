#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int n, a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a+4);
    if (a[0] + a[3] == a[1] + a[2] || a[0] + a[1] + a[2] == a[3]) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}