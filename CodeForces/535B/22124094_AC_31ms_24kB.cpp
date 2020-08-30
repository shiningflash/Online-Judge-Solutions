#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 1e9
 
vector <ll> v;

void init(ll x) {
	if (x > mx) return;
	v.push_back(x);
	init(x * 10 + 4);
	init(x * 10 + 7);
}

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, k;
	init(0);
	cin >> n;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == n) {
			cout << i << "\n";
			return 0;
		}
	}
    return 0;
}