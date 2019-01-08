#include <stdio.h>
#include <math.h>

int main() {

    int i, j, T, N, K, a, sum, x;
    scanf("%d", &T);
    for (i = 1; i <= T; i++) {
            sum = 0;
        scanf("%d %d", &N, &K);
        for (j = 1; j <= N; j++) {
            scanf("%d", &a);
            sum = sum + a;
        }
    x = (K * (N+1)) - sum;
    printf("Case %d: %d\n", i, x);
    }

    return 0;
}