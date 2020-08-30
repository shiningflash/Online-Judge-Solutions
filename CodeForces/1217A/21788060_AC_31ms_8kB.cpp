#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        d = max((b + c - a + 2) / 2, 0);
        cout << max(0, c - d + 1) << "\n";
    }
}