#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && c == 0) cout << "0\n";
    else if (a == b && c > 0) cout << "?\n";
    else if (a + c < b) cout << "-\n";
    else if (b + c < a) cout << "+\n";
    else cout << "?\n"; 
    return 0;
}