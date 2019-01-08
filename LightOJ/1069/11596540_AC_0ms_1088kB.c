#include <stdio.h>
#include <math.h>
 
int main () {
    int i, t, a, b;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        if (a <= 0) {
            i--;
            continue;
        }
        if (b < a) b = 2*a-b;
        printf("Case %d: %d\n", i, 3*3+b*4+2*5);
    }
 
    return 0;
}