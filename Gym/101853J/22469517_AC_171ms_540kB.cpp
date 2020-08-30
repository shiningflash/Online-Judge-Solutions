#include <bits/stdc++.h>
using namespace std;

const int le = 1e5+5;
int a[le];
vector <int> v;

int main() {
    //freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    map<int, int> m;

    while (t--) {
        m.clear();
        int n, mx = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> x, a[i] = x, m[x]++;
        for (int i = 0; i < n; i++) x = a[i], mx = max(mx, (m[x]) + m[x+1]);
        cout << mx << endl;
    }

    return 0;
}
