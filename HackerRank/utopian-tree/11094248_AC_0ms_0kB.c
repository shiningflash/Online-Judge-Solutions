#include <stdio.h>
#include <math.h>

int main() {
    int t, T, a, n, k, p;
    scanf("%d", &T);
    for(t = 0; t < T; t++){
        scanf("%d", &n);
        a = 1;
        if (n == 0) {
            a = 1;
        }
        else {
            for (k = 1; k <= n; k++) {
                if (k % 2 == 0) {
                    a += 1;
                }
                else {
                    a *= 2;
                }
            }
        }
        printf("%d\n", a);
    }
    return 0;
}