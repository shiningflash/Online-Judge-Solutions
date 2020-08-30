#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    if (s[0] > '0' && k > 0 && n == 1) s[0] = '0', k--;
    else if (s[0] > '1' && k > 0 && n > 1) s[0] = '1', k--;
    for (int i = 1; i < n; i++) {
        if (s[i] > '0' && k > 0) {
            s[i] = '0';
            k--;
        }
    }
    cout << s << endl;
    return 0;
}