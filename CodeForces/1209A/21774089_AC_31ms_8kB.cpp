#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int n, a[105], b[105], cnt = 0, ans = 0;
    cin >> n;
    bool one = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) one = true;
    }
    memset(b, 0, sizeof(b));
    sort(a, a+n);
    for (int i = 0; i < n; i++) {
        bool f = false;
        if (b[i] == 0) cnt++;
        for (int j = i; j < n; j++) {
            //cout << a[i] << " " << a[j] << endl;
            if (a[j] % a[i] == 0 && b[j] == 0) {
                //cout << a[i] << " " << a[j] << endl;
                b[j] = 1;
                cnt++;
                f = true;
            }
        }
        if (f) ans++;
        //if (cnt == n) break;
    }
    if (one) ans = 1;
    cout << ans << endl;
}