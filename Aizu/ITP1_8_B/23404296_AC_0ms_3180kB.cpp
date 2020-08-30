// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    string n;
    while (cin >> n && n != "0") {
        int sum = 0;
        for (int i = 0; i < n.size(); i++) sum += (n[i] - '0');
        cout << sum << endl;
    }
}