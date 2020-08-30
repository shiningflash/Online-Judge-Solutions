#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int a[100005], t, cas(0), n;
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
        sort(a, a+n+1);
        ll cnt = 1, sum = a[1];
        for (int i = 2; i <= n; i++) if (a[i] >= sum) sum += a[i], cnt++;
        printf("Case #%d: %lld\n", ++cas, cnt);
    }
}
