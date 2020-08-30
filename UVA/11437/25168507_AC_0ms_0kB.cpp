// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5;

void sol() {
    double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    int ans = (int) ((abs((ax - bx) * (cy - by) - (cx - bx) * (ay - by)) / 14.0) + 0.5);
    cout << ans << endl;
}

int main() {
    //freopen("in", "r", stdin);
    int t;
    for (cin >> t; t--; ) sol(); 
    return 0;
}