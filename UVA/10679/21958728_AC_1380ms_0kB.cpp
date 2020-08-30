#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    string str, s;
    int n, x;
    for (cin >> n; n--; ) {
        cin >> str;
        for (cin >> x; x--; ) {
            cin >> s;
            cout << ((strstr(str.c_str(), s.c_str())) ? "y\n" : "n\n");
        }
    }
}