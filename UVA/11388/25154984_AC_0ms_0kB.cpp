// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define PB push_back

const int mx = 1e5+5;

int main() {
    int n, m, t;
    for (cin >> t; t--; ) {
        cin >> n >> m;
        if (m % n == 0) cout << n << " " << m << endl;
        else cout << -1 << endl; 
    }
    return 0;
}