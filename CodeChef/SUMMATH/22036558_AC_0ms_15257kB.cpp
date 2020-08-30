#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t, x, n, sum = 0;
    for (cin >> t; t-- ; ) {
        cin >> n;
        x = n / 10;
        x = (x * (x+1)) / 2;
        cout << x*10 << endl;
    }
}
