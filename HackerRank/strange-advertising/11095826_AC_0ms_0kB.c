#include <stdio.h>
#include <math.h>

int main() {
    int n, i, interested = 2, ans = 2;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        interested = (interested * 3) / 2;
        ans = ans + interested;
    }
    printf("%d\n", ans);
    return 0;
}