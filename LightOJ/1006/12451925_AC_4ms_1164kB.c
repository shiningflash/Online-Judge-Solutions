#include <stdio.h>

long long int a, b, c, d, e, f, n, arr[10010];

long long int fn(long long int n) {
    int i = 0;
    for ( ; i <= n; i++) {
        if( i == 0 ) {
                arr[i] = a; continue;
        }
        if( i == 1 ) {
                arr[i] = b; continue;
        }
        if( i == 2 ) {
                arr[i] = c; continue;
        }
        if( i == 3 ) {
                arr[i] = d; continue;
        }
        if( i == 4 ) {
                arr[i] = e; continue;
        }
        if( i == 5 ) {
                arr[i] = f; continue;
        }
        arr[i] = ((arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4] + arr[i-5] + arr[i-6]) % 10000007);
    }
    return arr[n];
}
int main() {
    long long int i = 1, n, cases;
    scanf("%lld", &cases);
    for ( ; i <= cases; i++) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", i, fn(n) % 10000007);
    }
    return 0;
}
