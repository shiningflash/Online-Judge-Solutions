// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back
 
const int len = 1e5+5;
const int PI = acos (-1.0);
 
LLI min(LLI a, LLI b) {
	return (a < b ? a : b);
}
 
LLI max(LLI a, LLI b) {
	return (a > b ? a : b);
}
 
int main() {
    // freopen("in", "r", stdin);
    LLI a, b, t, z, x, y;
	for (cin >> t; t--; ) {
		cin >> x >> y;
		if (y >= 9999999999) z = 10;
		else if (y >= 999999999) z = 9;
		else if (y >= 99999999) z = 8;
		else if (y >= 9999999) z = 7;
		else if (y >= 999999) z = 6;
		else if (y >= 99999) z = 5;
		else if (y >= 9999) z = 4;
		else if (y >= 999) z = 3;
		else if (y >= 99) z = 2;
		else if (y >= 9) z = 1;
		else z = 0;
		LLI ans = (LLI) (z * x); 
		cout << ans << endl;
	}
}