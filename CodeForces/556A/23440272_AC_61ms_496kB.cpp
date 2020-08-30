// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e5+5;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    int n, a = 0, b = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') a++;
        if (s[i] == '1') b++;
    }
    cout << abs(b-a) << endl;
}
