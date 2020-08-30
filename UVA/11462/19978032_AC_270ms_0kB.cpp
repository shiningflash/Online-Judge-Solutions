#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[2000005];
    while (scanf("%d", &n) && n > 0) {
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        sort(a, a+n);
        for (int i = 0; i < n-1; i++) printf("%d ", a[i]);
        printf("%d\n", a[n-1]);
    }
}