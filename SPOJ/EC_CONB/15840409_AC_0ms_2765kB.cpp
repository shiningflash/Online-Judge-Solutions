#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(ll a, ll x) {
  while (a != 0) {
			x = x << 1;
			x += (a & 1);
			a = a >> 1;
    }
    return x;
}

int main() {
	ll t, a, x, sol;
	cin >> t;
  
	while (t--) {
		x = 0;
		cin >> a;

		if (a % 2 != 0) {
			cout << a << endl;
			continue;
		}
		
                sol = f(a, x);
		cout << sol << endl;
	}
	return 0;
}