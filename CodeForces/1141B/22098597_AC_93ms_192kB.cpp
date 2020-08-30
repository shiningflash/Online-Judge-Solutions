#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, cnt(0), mx(0);
    cin >> n;
    bool a[n+5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) mx = max(mx, cnt), cnt = 0;
        else cnt++;
    }
    mx = max(cnt, mx);
    cnt = 0;
    int i = 0, j = n-1;
    while (i < n && a[i] == 1) cnt++, i++;
    while (j >= 0 && a[j] == 1) cnt++, j--;
    mx = max(mx, cnt);
    cout << min(mx, n) << endl;
    return 0;
}