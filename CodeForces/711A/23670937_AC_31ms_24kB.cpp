// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back
 
const int len = 1e5+5;
const int PI = acos (-1.0);
 
int main() {
    // freopen("in", "r", stdin);
    string s[1005];
    int n; cin >> n;
    bool f = false;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        if (s[i][0] == 'O' && s[i][1] == 'O') {
            s[i][0] = '+', s[i][1] = '+';
            f = true;
            break;
        }
        else if (s[i][3] == 'O' && s[i][4] == 'O') {
            s[i][3] = '+', s[i][4] = '+';
            f = true;
            break;
        }
    }
    if (f) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) cout << s[i] << "\n";
    }
    else cout << "NO\n";
}