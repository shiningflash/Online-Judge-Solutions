#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s, q, n = 0;
    cin >> t >> s >> q;
    while (s < t) n++, s *= q;
    cout << n << "\n";
}
