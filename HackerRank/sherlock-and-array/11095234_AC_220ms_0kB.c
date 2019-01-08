#include <stdio.h>
#include <math.h>

int main() {
    int t, T, n, sign, i;
    scanf("%d", &T);
    for (t = 0; t < T; t++) {
        int a[1000000];
        sign = 0;
        long long left = 0, right = 0;
        scanf ("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            right = right + a[i];
        }
        for (i = 0; i < n; i++) {
            right = right - a[i];
            if (i > 0) {
                left = left + a[i-1];
            }
            if (right == left) {
                sign = 1;
            }
        }
        if (sign == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}