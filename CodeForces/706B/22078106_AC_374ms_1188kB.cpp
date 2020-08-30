#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, x;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> x, v.push_back(x);
    sort(v.begin(), v.end());
    for (cin >> q; q--; ) {
        cin >> x;
        int ans = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << ans - n << endl;
    }
    return 0;
}