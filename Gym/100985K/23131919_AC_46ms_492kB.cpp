#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int x = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] != s[i]) {
            x++;
            cout << s[i-1];
            cout << x;
            x = 0;
        }
        else x++;
    }
    cout << s[s.size()-1];
    cout << ++x;
    cout << endl;
    return 0;
}
