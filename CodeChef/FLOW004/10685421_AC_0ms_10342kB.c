#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned int i = 0, t, r, p;
    unsigned long int n;
    scanf("%u", &t);
    int arr[20];

    for (i; i < t; i++) {
        p = 0;
        scanf("%Lu", &n);
        while (n > 0) {
            r = n % 10;
            arr[p] = r;
            p++;
            n = n / 10;
        }
        printf("%u\n", arr[0] + arr[p-1]);
    }

    return 0;
}