#include <stdio.h>
#include <math.h>

int main() {
    int n, k, a, i, j;
    int p[102];
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if ((p[i] + p[j]) % k == 0) {
                a++;
            }
        }
    }
    printf("%d\n", a);
    return 0;
}
