#include <stdio.h>
#include <math.h>
 
int main () {
    int i, t, a, b;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &a);
        b = a / 2;
        a = a % 2 + a / 2;
        printf("%d %d\n", a, b);
    }
    return 0;
}