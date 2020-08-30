#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m) {
    int x = 1, sum = 0;
    while (n != 0) {
        int d = n % 10;
        n /= 10;
        if (d == 1) sum += x;
        x *= 2;
    }
    return (sum == m);
}

int main() {
    //freopen("in.txt", "r", stdin);
    int cas(0), t, a, b, c, d, w, x, y, z;
    char ch;
    for (cin >> t; t--; ) {
        cout << "Case " << ++cas << ": ";
        cin >> a >> ch >> b >> ch >> c >> ch >> d;
        cin >> w >> ch >> x >> ch >> y >> ch >> z;
        if (!check(w, a)) cout << "No" << endl;
        else if (!check(x, b)) cout << "No" << endl;
        else if (!check(y, c)) cout << "No" << endl;
        else if (!check(z, d)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
