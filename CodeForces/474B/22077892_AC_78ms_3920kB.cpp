#include <bits/stdc++.h>
using namespace std;
#define mx 1000005
 
int a[mx];
 
int main() {
    //freopen("in.txt.txt", "r", stdin);
    int t, n, q, x;
    scanf("%d", &n);
    for (int i = 1, j = 1; i <= n; i++) {
        scanf("%d", &x);
        while (x--) a[j++] = i;
    }
    for (scanf("%d", &q); q--; ) {
        scanf("%d", &x);
        printf("%d\n", a[x]);
    }
    return 0;
}