#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
#define fr first
#define sc second
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll r, a, b, c, d;
	cin >> r >> a >> b >> c >> d;
	double dd = sqrt(((a-c) * (a-c)) + ((b-d) * (b-d))) * 1.0;
	cout << (ll) ceil(dd / (2*r)) << "\n";
    return 0;
}