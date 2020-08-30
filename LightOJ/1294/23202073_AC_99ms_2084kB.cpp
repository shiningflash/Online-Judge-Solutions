// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    // freopen("in", "r", stdin);
 
	LLI cas(0), t, n, m;
	for (cin >> t; t--; ) {
		cin >> n >> m;
		cout << "Case " << ++cas << ": " << (n*m)/2 << endl;
	}
}