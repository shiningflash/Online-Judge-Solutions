#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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