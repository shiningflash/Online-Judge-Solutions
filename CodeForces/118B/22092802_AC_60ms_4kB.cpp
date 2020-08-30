#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    int n, c, d, m;
    scanf("%d", &n);
    m = 2*n + 1;
    for (int i = 0; i < m; i++) {
        c = abs(n - i);
        d = (i <= n ? i : 2*n - i);
        for (int j = 0; j < c; j++) printf("  ");
        for (int j = 0; j <= d; j++) {
            printf("%d", j);
            if (d) printf(" ");
        }
        for (int j = d-1; j >= 0; j--) {
            printf("%d", j);
            if (j) printf(" ");
        }
        printf("\n");
    }
    return 0;
}