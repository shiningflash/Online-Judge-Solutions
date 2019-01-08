#include <stdio.h>
#include <math.h>
 
int main () {
    int i, t;
    unsigned long long int j, k;
    scanf("%d\n", &t);
    for (i = 1; i <= t; i++) {
        scanf("%lld %lld", &j, &k);
        if (j % (2*k) == 0) {
           printf("Case %d: %lld\n", i, (j*k) / 2);
        }
    }
    return 0;
}