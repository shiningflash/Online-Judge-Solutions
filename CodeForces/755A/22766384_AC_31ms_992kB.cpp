#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 1e6;
const int rng = 1e3;
bool a[mx+2];

void sieve() {
    a[0] = a[1] = 1;
    for (int i = 2; i <= sqrt(mx); i++) {
        if (a[i] == 0) {
            for (int j = i<<1; j <= mx; j+=i) a[j] = 1;
        }
    }
}

int main() {
    sieve();
    int n;
    cin >> n;
    for (int m = 1; m <= rng; m++) {
        if (a[n * m + 1]) {
            cout << m << endl;
            return 0;
        }
    }
    return 0;
}
