#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int q, n, a[500];
    for (scanf("%d", &q); q--; ) {
        scanf("%d", &n);
        for (int i = 1; i <= 4*n; i++) scanf("%d", &a[i]);
        int i = 1, j = 4*n, sum = 0;
        bool f = true;
        sort(a+1, a+(4*n)+1);
        for (int k = 1; k <= n; k++) {
            if (a[i++] != a[i] || a[j--] != a[j]) {
                f = false;
                break;
            }
            if (k == 1) sum = a[i]*a[j];
            else if (a[i]*a[j] != sum) {
                f = false;
                break;
            }
            i++; j--;
        }
        printf("%s\n", (f ? "YES" : "NO"));
    }
}