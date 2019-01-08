#include <stdio.h>
#include <math.h>

int main() {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if (v2 >= v1) {
        printf("NO\n");
    }
    else if ((x2-x1) % (v1-v2) == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}