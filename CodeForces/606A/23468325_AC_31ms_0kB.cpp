// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 1e6;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    int a[3], x, sum = 0;
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) {
        cin >> x;
        a[i] -= x;
        sum += (a[i] > 0 ? a[i] / 2 : a[i]);
    }
    cout << (sum >= 0 ? "Yes\n" : "No\n");
}
