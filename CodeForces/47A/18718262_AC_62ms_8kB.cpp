#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, n;
    cin >> n;
    a = sqrt(8*n+1) - 1;
    a >>= 1;
    a *= (a + 1);
    a >>= 1;
//    cout << a << endl;
    cout << ((a == n) ? "YES\n" : "NO\n");
}