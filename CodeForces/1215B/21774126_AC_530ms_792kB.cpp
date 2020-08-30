#include <bits/stdc++.h>
using namespace std;
 
int a[200005];
 
int main() {
    long long int n, x, t1 = 0, t2 = 1, ans1 = 0, ans2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x < 0) a[i] = 1;
        a[i] += a[i-1];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 1) ans2 += t1, ans1 += t2, t1++;
        else ans1 += t1, ans2 += t2, t2++;
    }
    cout << ans1 << " " << ans2 << endl;
}