#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, cnt(0);
    scanf("%d %d", &n, &k);
    int a[n+2];
    for (int i = 0; i < n; scanf("%d", &a[i++]));
    sort(a, a+n);
    for (int i = 0; i < n; i++) if (binary_search(a, a+n, a[i]+k)) cnt++;
    printf("%d\n", cnt);
}