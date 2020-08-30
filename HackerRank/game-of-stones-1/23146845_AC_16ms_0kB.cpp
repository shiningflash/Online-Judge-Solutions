// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("in", "r", stdin);
 
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << ((n % 7 == 0 || n % 7 == 1) ? "Second" : "First") << endl;
	}
}