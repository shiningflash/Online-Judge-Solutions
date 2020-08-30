// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;

LLI phi(LLI n) {
    LLI ans = n;
    for (LLI i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ans -= ans / i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}

int main() {
    LLI n;
    while (cin >> n && n > 0) {
        if (n == 1) cout << 0 << endl;
        else cout << phi(n) << endl;
    }
    return 0;
}