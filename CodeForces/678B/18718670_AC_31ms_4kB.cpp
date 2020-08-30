#include <bits/stdc++.h>
using namespace std;

bool leap(long long n) {
    return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
}

int main() {
    long long y, n, dd = 0;
    cin >> y;
    n = y;
    
    while (1) {
        dd += ((leap(n)) ? 2 : 1);
        n++;
        if (leap(y) == leap(n) && dd % 7 == 0) {
            cout << n << "\n";
            return 0;
        }
    }
}