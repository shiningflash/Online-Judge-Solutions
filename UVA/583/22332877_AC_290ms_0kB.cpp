#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define imax INT_MAX

const int mx = (int) (sqrt((double) imax)) + 1;
bool a[mx+5] = {0};
ll prime[mx+5];
int l = 0;

void sieve() {
    a[0] = a[1] = 1;
    prime[l++] = 2;
    for (int i = 2; i <= mx; i++) {
        if (a[i] == 0) {
            prime[l++] = i;
            for (int j = i*i; j <= mx; j += i) a[j] = 1;
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    ll n; sieve();
    while (scanf("%lld", &n) && n) {
        printf("%lld =", n);
        bool f = 1;
        if (n < 0) printf(" -1"), n *= -1, f = 0;
        for (int i = 0; i < l; i++) {
            while (n % prime[i] == 0 && n != 1) {
                if (f) printf(" %lld", prime[i]), f = 0;
                else printf(" x %lld", prime[i]);
                n /= prime[i];
            }
            if (n == 1 && i > n) break;
        }
        if (n != 1) {
            if (f) printf(" %lld", n);
            else printf(" x %lld", n);
        }
        printf("\n");
    }
    return 0;
}
