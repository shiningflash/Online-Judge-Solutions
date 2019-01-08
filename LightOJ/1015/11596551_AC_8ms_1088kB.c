#include <stdio.h>
#include <math.h>
 
int main () {
    int i, j, t, a, b;
    unsigned long long int sum;
    scanf("%d\n", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d", &a);
        sum = 0;
        for (j = 0; j < a; j++) {
            scanf("%d", &b);
            if (b > 0) {
                sum = sum + b;
            }
        }
        printf("Case %d: %lld\n", i, sum);
    }
    return 0;
}