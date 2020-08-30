#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    for (cin >> t; t--; ) {
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x > 0) sum++;
        }
        cout << sum << endl;
    }
}
