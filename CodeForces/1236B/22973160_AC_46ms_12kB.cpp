#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mod = 1e9+7;

LLI BIG_MOD(LLI n, LLI p) {
    if (p == 0) return 1;
    if (!(p & 1)) {
        LLI ret = BIG_MOD(n, p>>1);
        return ((ret%mod) * (ret%mod)) % mod;
    }
    else return ((n%mod) * (BIG_MOD(n, p-1) % mod)) % mod;
}

int main() {
    LLI n, m;
    cin >> n >> m;
    LLI x = BIG_MOD(2, m) - 1; // 2^m % mod - 1
    cout << BIG_MOD(x, n) << "\n"; // x^n % mod
}