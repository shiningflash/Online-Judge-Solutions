
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
 
bool check(char a, char b) {
    int x = a - 48;
    int y = b - 48;
    if (x % 2 == y % 2) return false;
    return true;
}
 
string MIN(string a, string b, int sz) {
    for (int i = 0; i < sz; i++) {
        if (a[i] < b[i]) return a;
        if (b[i] < a[i]) return a;
    }
    return a;
}
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int t, n;
    cin >> t;
    string s;
    //cin.ignore();
    while (t--) {
        cin >> s;
        int sz = s.size();
        string s1 = "", s2 = "";
        for (int i = 0; i < sz; i++) {
            if ((s[i] - '0') % 2 == 0) s1.push_back(s[i]);
            else s2.push_back(s[i]);
        }
        s1.push_back('9');
        s2.push_back('9');
        //cout << s1 << " " << s2 << endl;
        int x = 0, y = 0;
        for (int i = 0; i < sz; i++) {
            if (s1[x] < s2[y]) cout << s1[x], x++;
            else cout << s2[y], y++; 
        }
        cout << endl;       
    }
 
    return 0;
}