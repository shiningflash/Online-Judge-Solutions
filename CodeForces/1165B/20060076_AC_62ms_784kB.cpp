#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, len, cnt(0);
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    for (int i = 0, k = 1; i < n; i++) {
        if (a[i] >= k) {
            cnt++;
            k++;
        }
    }
    cout << cnt << endl;
    return 0;
}