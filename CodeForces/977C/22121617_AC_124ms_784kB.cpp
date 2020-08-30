#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k;
	cin >> n >> k;
	int a[n+5];
	for (int i = 1; i <= n; i++) cin >> a[i];
	sort(a+1, a+1+n);
	if (k == 0) cout << (a[1] == 1 ? "-1\n" : "1\n");
	else cout << (a[k] != a[k+1] ? a[k] : -1) << "\n";
    return 0;
}