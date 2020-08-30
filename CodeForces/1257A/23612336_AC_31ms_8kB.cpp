/*
    Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
 
const int len = 1e5+5;
const int Mod = 1e9+7;
const int mx = 1e5+5;
 
 
int main() {
    //freopen("in", "r", stdin);
    //freopen("in", "w", stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        cout << min((abs(a-b)) + x, n-1) << endl;
    }
 
    return 0;
}