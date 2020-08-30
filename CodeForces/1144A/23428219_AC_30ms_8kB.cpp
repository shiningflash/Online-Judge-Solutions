// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    int n;
    string s;
    for (cin >> n; n--; ) {
        cin >> s;
        sort(s.begin(), s.end());
        bool f = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] - s[i-1] != 1) {
                f = false;
                break;
            }
        }
        cout << (f ? "Yes\n" : "No\n");
    }
}