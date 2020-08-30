#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

int main() {  
	// freopen("in", "r", stdin);

	int n, a[mx], q, x;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> q;
	while (q--) {
		cin >> x;
		int low = lower_bound(a, a+n, x) - a - 1;
		int high = upper_bound(a, a+n, x) - a;
		if (low < 0) cout << "X ";
		else cout << a[low] << " ";
		if (high < n) cout << a[high] << "\n";
		else cout << "X\n";
	}
    return 0;
} 