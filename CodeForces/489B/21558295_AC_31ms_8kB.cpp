#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[105], b[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    sort(a, a+n);
    sort(b, b+m);
    int i(0), j(0), k(0);
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) i++, j++, k++;
        else if (a[i] > b[j]) j++;
        else i++;
    }
    printf("%d\n", k);
}