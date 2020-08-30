#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int main() {
//    freopen("in", "r", stdin);
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        mp[s]++;
        if (mp[s] == 1) cout << "OK\n";
        else if (mp[s] > 1) {
            cout << s;
            cout << (int) mp[s]-1 << endl;
        }
    }
    return 0;
}
