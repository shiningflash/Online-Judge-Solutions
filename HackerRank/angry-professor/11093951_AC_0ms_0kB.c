#include <stdio.h>
#include <math.h>

int main() {
    int t, T, a, n, k, p;
    scanf("%d", &T);
    for(t = 0; t < T; t++){
        scanf("%d %d", &n, &k);
        p = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a <= 0) {
                p++;
            }
        }
        if (p >= k) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}