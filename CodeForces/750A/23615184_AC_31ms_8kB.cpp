#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
const int mx = 1e5+5;

int main() {
    int n, k, sum = 0;
    cin >> n >> k;
    k = 240 - k;
    for (int i = 0; i <= n; i++) {
        k -= (5*i);
        if (k < 0) {
            cout << i-1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}