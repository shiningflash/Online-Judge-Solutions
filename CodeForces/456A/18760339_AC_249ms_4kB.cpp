#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    ll tst, t = 1, n, m, q;
    bool flg = false;
    cin >> n;
    while (n--) {
        cin >> m >> q;
        if (m != q) flg = true;
    }
    cout << ((flg) ? "Happy Alex\n" : "Poor Alex\n");
}