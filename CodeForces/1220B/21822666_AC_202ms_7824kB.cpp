#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    scanf("%d", &n);
    long long int a[n+1][n+1];
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) scanf("%lld", &a[i][j]);
    long long int rr = sqrt((a[1][2] * a[1][3]) / a[2][3]) + .5; 
    printf("%lld", rr);
    for (int i = 2; i <= n; i++) printf(" %lld", (a[1][i] / rr));
    printf("\n");
}
