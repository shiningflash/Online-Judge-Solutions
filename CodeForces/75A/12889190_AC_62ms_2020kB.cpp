#include <bits/stdc++.h>
using namespace std;

int func(int n) {
    int m = 0, rem = 1;
    while (n != 0) {
        int d = n % 10;
        n /= 10;
        if (d != 0) {
            m += d * rem;
            rem *= 10;
        }
    }
    return m;
}

int main() {
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    int x = func(a);
    int y = func(b);
    int z = func(c);
    if (x + y == z) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}