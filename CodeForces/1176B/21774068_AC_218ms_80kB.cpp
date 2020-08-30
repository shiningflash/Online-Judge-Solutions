#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, q, z;
ll a[10005];
 
int main() {
    cin >> q;
    while (q--) {
        ll cnt = 0, one = 0, two = 0, x = 0, y = 0, zz = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> z;
            z = z % 3;
            if (z == 0) cnt++;
            else if (z == 1) one++;
            else if (z == 2) two++;
        }  
        x = min(one, two);
        if (one > two) y = (one - x) / 3;
        else zz = ((two  - x) * 2) / 6;
        cout << (cnt + x + y + zz) << endl;
    }
}