#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, n, k;
 
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == 4) a++;
        else if (k == 8) {
            if (a > 0) b++, a--;
        }
        else if (k == 15) {
            if (b > 0) c++, b--;
        }
        else if (k == 16) {
            if (c > 0) d++, c--;
        }
        else if (k == 23) {
            if (d > 0) e++, d--;
        }
        else if (k == 42) {
            if (e > 0) f++, e--;
        }
    }
    if (n > 5) cout << (n - (f*6))<< endl;
    else cout << n << endl;
}
