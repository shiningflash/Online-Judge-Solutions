#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    LLI n, x;
    for (cin >> n; n--; ) {
        cin >> x;
        if (x >= 14 && x % 14 >= 1 && x % 14 <= 6) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}