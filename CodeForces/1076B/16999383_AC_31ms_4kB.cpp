#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll NOofSUBSTRACTION(ll n) {
    if (n % 2 == 0) return n/2;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 1 + (n-i) / 2;
    return 1;
}

int main() {
    ll n; cin >> n;
    cout << NOofSUBSTRACTION(n) << endl;
    return 0;
}
