// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    LLI n, x;
    cin >> n;
    vector <LLI> v;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n != 1) v.push_back(n);
    cout << (v.size() == 1 ? v[0] : 1) << "\n";
}