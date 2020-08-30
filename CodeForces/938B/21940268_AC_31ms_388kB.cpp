#include <bits/stdc++.h>
using namespace std;
#define mx 1000000

int main() {
    int n, ans = 0; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)  scanf("%d", &a[i]), ans = max(min(a[i] - 1, mx - a[i]), ans);
    cout << ans << "\n";
    return 0;
}
