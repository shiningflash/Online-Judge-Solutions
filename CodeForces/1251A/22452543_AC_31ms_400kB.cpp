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
 
int a[mx];
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
 
    int n;
    cin >> n;
    cin.ignore();
    string s;
    for (int k = 0; k < n; k++) {
        getline(cin, s);
        //cout << s << endl;
        int sz = s.size();
        set<char> st;
        if (sz == 1) st.insert(s[0]);
        else if (sz == 2) {
            if (s[0] != s[1]) st.insert(s[0]), st.insert(s[1]);
        }
        else {
            s.append("0");
            for (int i = 0; i < sz; i++) {
                if (s[i] == s[i+1]) i++;
                else st.insert(s[i]);
            }
            //if (s[sz-1] != s[sz-2]) st.insert(s[sz-1]);
        }
        set<char>::iterator it;
        for (it = st.begin(); it != st.end(); it++) cout << (char) *it;
        cout << endl;
    }
 
    return 0;
}