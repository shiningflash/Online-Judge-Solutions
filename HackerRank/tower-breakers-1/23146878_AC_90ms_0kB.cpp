// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    // freopen("in", "r", stdin);
 
	LLI t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << ((m == 1 || (n % 2 == 0)) ? "2" : "1") << endl;
	}
}