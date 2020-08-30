#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, a, cnt(0);
    scanf("%d %d", &n, &t);
    int aa[n+2];
    for (int i = 0; i < n; scanf("%d", &aa[i]), i++);
    sort(aa, aa+n);
    for (int i = 0; i < n; i++) {
        if (t >= aa[i]) t -= aa[i], cnt++;
        else break;
    }
    printf("%d\n", cnt);
}