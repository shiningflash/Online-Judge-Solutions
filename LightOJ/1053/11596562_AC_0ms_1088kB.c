#include <stdio.h>
#include <math.h>
 
int main () {
    int i, t, a, b, c;
    unsigned long long int j;
    scanf("%d\n", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a>b && a>c) {
            j = a*a - (b*b + c*c);
        }
        else if (b>c && b>a) {
            j = b*b - (a*a + c*c);
        }
        else {
            j = c*c - (b*b + a*a);
        }
        printf("Case %d: ", i);
        if (j==0) {
            printf("yes\n");
        }
        else printf("no\n");
    }
    return 0;
}
