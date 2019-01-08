#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    n = n * 2;
    int i, flag, t, r, k;
    flag = 0;
    for (i = 1; i * i <= n; i++) {
        t = (i * (i + 1));
        r = n - t;
        k = sqrt(r);
        t = (k * (k + 1));
        if (t == r && k > 0) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}