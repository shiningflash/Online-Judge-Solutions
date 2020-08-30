#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    int t, cas(0), n, x, m;
    bool ff;
    for (scanf("%d", &t); t--; ) {
        stack<string> b, f;
        printf("Case %d:\n", ++cas);
        string s, str = "http://www.lightoj.com/";
        while (cin >> s && s[0] != 'Q') {
            ff = true;
            if (s[0] == 'V') b.push(str), cin >> str, f = stack<string>();
            if (s[0] == 'B') {
                if (b.empty()) ff = false;
                else f.push(str), str = b.top(), b.pop();
            }
            if (s[0] == 'F') {
                if (f.empty()) ff = false;
                else b.push(str), str = f.top(), f.pop();
            }
            cout << (ff ? str : "Ignored") << endl;
        }
    }
}