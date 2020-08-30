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
    int n;
	cin >> n;
	int a[n+5];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	cout << min(a[n-1] - a[1], a[n-2] - a[0]) << "\n";
    return 0;
}