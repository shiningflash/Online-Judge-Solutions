// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    string a, b;
    cin >> a >> b;
    bool ok;
    for (int i = 0; i < a.size(); i++) {
        ok = 1;
        for (int j = 0; j < b.size(); j++) {
            if (a[(i+j) % a.size()] != b[j]) {
                ok = 0;
                break;
            }
        }
        if (ok) break;
    }
    cout << (ok ? "Yes\n" : "No\n");
}