#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    string s, ss;
    int a[200];
    int b[200];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for (int i = 0; i < 2; i++) {
        getline(cin, s);
        int len = s.length();
        for (int i = 0; i < len; i++) {
            a[(int) s[i] - 'A']++;
        }
    }
    getline(cin, ss);
    int len = ss.length();
    for (int i = 0; i < len; i++) {
        b[(int) ss[i] - 'A']++;
    }
    bool flg = true;
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            flg = false;
            break;
        }
    }
    if (flg) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
