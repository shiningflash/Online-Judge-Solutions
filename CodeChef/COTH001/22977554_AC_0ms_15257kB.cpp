#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

int main() {  
	// freopen("in", "r", stdin);

	int t, n, m;
	for (cin >> t; t--; ) {
		cin >> n >> m;
		if (m % n == 0) cout << 0 << endl;
		else {
			if (m < n) cout << n-m << endl;
			else cout << ((m/n) + 1) * n - m << endl; 
		}
	}
    return 0;  
} 