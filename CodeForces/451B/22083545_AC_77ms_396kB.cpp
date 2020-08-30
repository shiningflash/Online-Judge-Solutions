#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, l(0), r, s(1), e(1);
    cin >> n;
    if (n == 1) {
        cout << "yes\n" << 1 << " " << 1 << "\n";
        return 0;
    }
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    while (l+1 < n && a[l] < a[l+1]) l++;
    r = l+1;
    while (r < n && a[r] < a[r-1]) r++;
    reverse(a.begin()+l, a.begin()+r);
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n" << l+1 << " " << r << "\n";
    return 0;
}