#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    string s, ss;
    getline(cin, s);
    int len = s.length();
    ss += (char) s[0];
    for (int i = 1; i < len; i++) {
        if (s[i] == '/' && s[i-1] == '/');
        else ss += (char) s[i];
    }
    if (ss == "/usr" || ss == "/usr/") cout << "/usr/" << endl;
    else {
        cout << ss[0];
        for (int i = 1; i < ss.length()-1; i++)
            cout << (char) ss[i];
        if (ss[ss.length()-1] != '/') cout << ss[ss.length()-1];
        cout << endl;
    }
    return 0;
}
