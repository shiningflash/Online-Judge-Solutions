#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i= 0; i < n; i++) scanf("%d", &a[i]), sum += a[i];
    sort(a, a+n);
    m = a[n-1];

    for (int i = 1; i < (1 << n); i++) {
        int aa = 0, b = i;
        for (int j = 0; j < n; j++) {
            aa += (b % 2) * a[j];
            b /= 2;
            if (!b) break;
        }
        m = min(m, abs(sum - 2*aa));
    }

    printf("%d\n", m);
}