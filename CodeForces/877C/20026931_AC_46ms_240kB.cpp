#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    scanf("%d", &n);
    printf("%d\n", n + (n>>1));
    if (n > 1) printf("2");
    for (i = 4; i <= n; i+=2) printf(" %d", i);
    for (i = 1; i <= n; i+=2) printf(" %d", i);
    for (i = 2; i <= n; i+=2) printf(" %d", i);
    printf("\n");
}