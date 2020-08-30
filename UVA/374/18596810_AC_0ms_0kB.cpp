#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int n, p, m;

int modolo(int n, int p) {
	if (p == 0) return 1;
	if (p % 2 == 0) {
		ll ret = modolo(n, p>>1);
		return ((ret%m) * (ret%m)) % m;
	}
	else return ((n%m) * (modolo(n, p-1) % m) % m);
}

int main() {
//	freopen("in", "r", stdin);
	while(cin >> n >> p >> m) {
		cout << modolo(n, p) << endl;
	}
}