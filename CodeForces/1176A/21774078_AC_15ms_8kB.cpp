#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, q;
 
ll sol() {
    ll cnt = 0;
    while (1) {
        if (n == 1) return cnt;
        else if (n % 2 == 0) n = n / 2;
        else if (n % 3 == 0) n = (2*n) / 3;
        else if (n % 5 == 0) n = (4*n) / 5;
        else if (n < 1) return -1;
        else return -1;
        cnt++;
//        cout << n << endl;
    }
}
 
int main() {
    cin >> q;
    while (q--) {
        cin >> n;
        cout << sol() << endl;
    }
}
