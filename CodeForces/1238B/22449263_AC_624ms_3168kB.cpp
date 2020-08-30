#include <set>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 10000
 
struct cmp {
    bool operator() (const int& lhs, const int& rhs) const {
        return lhs > rhs;
    }
};
 
int main() {
    int t, n, m, l, r, x;
    cin >> t;
    while (t--) {
        set<int, cmp> s;
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> x, s.insert(x);
        set<int, cmp>::iterator it;
        int x = 0, ans = 0;
        for (it = s.begin(); it != s.end(); it++) {
            if (*it <= x) break;
            ans++;
            x += m;
        }
        cout << ans << endl;
    }
    return 0;
}