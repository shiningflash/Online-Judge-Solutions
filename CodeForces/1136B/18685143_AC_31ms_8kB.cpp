#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, ans, pp;
	cin >> n >> k;
	cout << ((k == 1 || n == k) ? 3*n : 3*n + min(k-1, n-k) ) << endl;
	return 0;
}