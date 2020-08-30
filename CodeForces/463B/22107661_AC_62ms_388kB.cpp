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
    int n, cost(0), val(0);
	cin >> n;
	int a[n+5];
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		val += (a[i-1] - a[i]);
		if (val < 0) cost += (-1 * val), val = 0;
	}
	cout << cost << "\n";
    return 0;
}