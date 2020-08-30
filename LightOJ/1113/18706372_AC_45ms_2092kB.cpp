#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("in", "r", stdin);
    int tst, t = 1, x;
    bool flg = true;
    for (cin >> tst; tst--;) {
        stack <string> b;
        stack <string> f;
        printf("Case %d:\n", t++);
        string cmd, url = "http://www.lightoj.com/";
        while (cin >> cmd && cmd[0] != 'Q') {
            flg = true;
            if (cmd[0] == 'V') {
                b.push(url);
                cin >> url;
                f = stack<string>();
            }
            if (cmd[0] == 'B') {
                if (b.empty()) flg = false;
                else {
                    f.push(url);
                    url = b.top();
                    b.pop();
                }
            }
            if (cmd[0] == 'F') {
                if (f.empty()) flg = false;
                else {
                    b.push(url);
                    url = f.top();
                    f.pop();
                }
            }
            cout << ((flg) ? url : "Ignored") << "\n";
        } 
    }
}