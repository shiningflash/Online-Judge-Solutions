#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
int main() {
    // freopen("in.txt", "r", stdin);
 
    int sx, sy, x, y, a = 0, b = 0, c = 0, d = 0, n;
    cin >> n >> sx >> sy;
 
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (sx < x) {
            a++;
        }
        if (sx > x) {
            b++;
        }
        if (sy < y) {
            c++;
        }
        if (sy > y) {
            d++;
        }
    }
 
    if (a >= b && a >= c && a >= d) {
        cout << a << "\n" << (sx + 1) << " " << sy << "\n";
    }
    else if (b >= a && b >= c && b >= d) {
        cout << b << "\n" << (sx - 1) << " " << sy << "\n";
    }
    else if (c >= a && c >= b && c >= d) {
        cout << c << "\n" << sx << " " << (sy + 1) << "\n";
    }
    else {
        cout << d << "\n" << sx << " " << (sy - 1) << "\n";
    }
 
    return 0;
}