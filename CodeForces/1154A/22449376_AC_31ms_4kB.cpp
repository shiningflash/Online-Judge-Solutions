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
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int x[4];
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    sort(x, x+4);
    int c = x[3] - x[0];
    int a = x[1] - c;
    int b = x[0] - a;
    cout << a << " " << b << " " << c << "\n";
    return 0;
}