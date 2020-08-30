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
 
int a, b, c, d;
 
void func(string x) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '0') a++;
        else b++;
        c++;
        //cout << x << endl;
    }
    if (c % 2 == 1) d++;
}
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int t, n, x;
    cin >> t;
    string s;
    while (t--) {
        cin >> n;
        cin.ignore();
        a = 0; b = 0; d = 0;
        for (int k = 0; k < n; k++) {
            cin >> s;
            c = 0;
            func(s);
        }
        //cout << a << " " << b << endl;
        if (d > 0) cout << n << endl;
        else {
            if (a % 2 == 0) cout << n << endl;
            else cout << n-1 << endl;
        }
    }
 
    return 0;
}