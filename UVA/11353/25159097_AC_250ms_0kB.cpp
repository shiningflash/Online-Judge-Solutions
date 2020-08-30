// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define PI pair <int, int>
#define MP make_pair
#define LLI long long int

const int mx = 2e6;
PI a[mx+5];
int p[mx+5], q[mx+5], totp = 0, co = 0, n;

bool cmp(PI x, PI y) {
    if (x.second == y.second) return x.first < y.first;
    return x.second < y.second;
}

bool prime(int n) {
    for (int i = 0; i < totp && p[i]*p[i] <= n; i++) {
        if (n % p[i] == 0) return false;
    }
    return true;
}

void custom_sieve() {
    p[totp] = 2;
    for (int i = 3; i*i <= mx; i+=2) if (prime(i)) p[++totp] = i;

    q[0] = 0;
    q[1] = 1;
    for (int i = 2; i <= mx; i++) {
        if (q[i] == 0) {
            for (LLI j = i; j <= mx; j *= i) {
                for (int k = j; k <= mx; k += j) q[k]++;
            } 
        }
    }

    for (int i = 0; i < mx; i++) a[i] = MP(i+1, q[i+1]);
    sort(a, a+mx, cmp);
}

int main() {
    custom_sieve();
    while (cin >> n && n) cout << "Case " << ++co << ": " << a[n-1].first << endl;
}