// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    // freopen("in", "r", stdin);
 
	LLI t, n, k;
	cin >> n >> k;
	cout << ((n == k || ((n/k) % 2 == 1)) ? "YES" : "NO") << endl;
}