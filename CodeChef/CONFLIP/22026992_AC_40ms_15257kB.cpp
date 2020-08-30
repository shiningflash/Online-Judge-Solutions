#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t, q, i, n, x;
    for (cin >> t; t--; ) {
    	for (cin >> x; x--; ) {
    		cin >> i >> n >> q;
    		if (n % 2 == 0 || i == q) cout << n/2 << "\n";
    		else cout << n/2+1 << "\n";
    	}
    }
 
	return 0;
}