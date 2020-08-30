#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, x, ans;
    cin >> a >> b;
    if (a % 2 == 0) x = a / 2;
    else x = a / 2 + 1;
    if (b <= x) ans = (b * 2 - 1);
    else ans = (b - x) * 2;
    cout << ans << "\n";
}
