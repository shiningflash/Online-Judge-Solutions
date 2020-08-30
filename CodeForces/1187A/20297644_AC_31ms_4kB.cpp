#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t, n, a, b;
    for (cin >> t; t--; ) {
        cin >> n >> a >> b;
        ll all = (a+b) - n;
        cout << (max(a - all, b - all) + 1) << endl;
    }
}