/*
    Amirul Islam
*/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
 
const int len = 1e5+5;
const int Mod = 1e9+7;
 
int a[len];
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        bool f = false;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] == 1) f = true;
        }
        cout << (f ? "2\n" : "1\n");
    }
 
    return 0;
}