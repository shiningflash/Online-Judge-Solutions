#include <stdio.h>
 
int main () {
    int i, t, a, b;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        if (a<0 || b<0 || a>10 || b>10) {
            i--;
            continue;
        }
        printf("Case %d: %d\n", i, a+b);
    }
 
    return 0;
}