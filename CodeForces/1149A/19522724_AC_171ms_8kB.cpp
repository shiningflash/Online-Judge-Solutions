#include <bits/stdc++.h>
using namespace std;

int n, p, one(0), two(0);

int main() {
    cin >> n;
    while (n--) {
        cin >> p;
        ((p == 1) ? one++ : two++);
    }
    if (two > 0) { two--; cout << 2 << " "; }
    if (one > 0) { one--; cout << 1 << " "; }
    while(two--) cout << 2 << " ";
    while(one--) cout << 1 << " ";
    cout << "\n";
}