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
    LLI n, d, t;
    for (cin >> t ; t--; ) {
        cin >> n >> d;
        if (n >= d) cout << "YES" << endl;
        else {
            bool f = true;
            for (int i = 1; i*i <= d; i++) {
                LLI x = i + (d / (i+1));
                if (d % (i+1) != 0) x++;
                //cout << x << endl;
                if (x <= n) {
                    cout << "YES\n";
                    f = false;
                    break;
                }
            }
            if (f) cout << "NO\n";
        }
    }
}
