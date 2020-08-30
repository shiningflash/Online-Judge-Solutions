#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    int x, y;
    while (cin >> x >> y) {
        if (x == y) cout << "2 " << y << "\n";
        else if (x > y) cout << "1 " << (x - y) << "\n";
        else cout << "2 " << (y - x) << "\n";
        cout.flush();
    }
    return 0;
}