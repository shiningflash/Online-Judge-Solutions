#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l(1), ans(0), num(0);
    long long int sum(0);
    scanf("%d %d", &n, &k);
    int a[n+1];
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a+1, a+n+1);
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        while (1LL * (i-l+1) * a[i] - sum > k) sum -= a[l], l++;
        if (i-l+1 > ans) ans = i-l+1, num = a[i];
    }
    printf("%d %d\n", ans, num);
}