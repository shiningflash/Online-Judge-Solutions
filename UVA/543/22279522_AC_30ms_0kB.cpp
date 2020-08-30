#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

bool a[mx];
int prime[mx], l = 0;

void sieve() {
    a[1] = 1;
    for (int i = 4; i <= mx; i += 2) a[i] = 1;
    for (int i = 3; i <= sqrt(mx); i += 2) {
        if (a[i] == 0) {
            prime[l++] = i;
            for (int j = i*i; j <= mx; j += i) a[j] = 1;
        }
    }
}

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    sieve();
    int n, x, y;
    while (cin >> n && n) {
        bool f = true;
        for (int i = 0; i < l; i++) {
            x = prime[i], y = n - prime[i];
            if (x > y) break;
            else if (a[x] + a[y] == 0) {
                cout << n << " = " << x << " + " << y << "\n";
                f = false;
                break;
            }
        }
        if (f) cout << "Goldbach's conjecture is wrong.\n";
    }
    return 0;
}