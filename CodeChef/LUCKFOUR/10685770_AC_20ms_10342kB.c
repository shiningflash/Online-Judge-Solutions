#include <stdio.h>

int main (void)
{
    int i, n, r, p;
    unsigned int t;
    scanf("%u", &t);

    for (i = 1; i <= t; i++) {
        p = 0;
        scanf("%d", &n);
        while (n > 0) {
            r = n % 10;
            if (r == 4) {
                p++;
            }
            n = n / 10;
        }
        printf("%d\n", p);
    }

    return 0;
}
