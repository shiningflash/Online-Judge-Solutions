/*
    Amirul Islam (shiningflash)  
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define le 100005
#define pii pair<int, int>
 
struct cmp {
    bool operator() (const int& l, const int& r) const {
        return l > r;
    }
};
 
int a[le];
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int n, x, gcd(0);
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) cin >> x, s.insert(x);
    if (s.size() > 3) cout << -1 << endl;
    else {
        vector <int> vec;
        set<int>::iterator it;
        for (it = s.begin(); it != s.end(); it++) vec.push_back(*it);
        if (vec.size() == 2) {
            if ((vec[1] - vec[0]) % 2 == 0) cout << (vec[1] - vec[0]) / 2 << "\n";
            else cout << vec[1] - vec[0] << "\n";
        }
        else if (vec.size() == 3) {
            if (vec[1] - vec[0] == vec[2] - vec[1]) cout << vec[2] - vec[1] << "\n";
            else cout << -1 << "\n";
        }
        else cout << 0 << "\n";
    }
 
    return 0;
}