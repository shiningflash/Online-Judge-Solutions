/*
	@author : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e7;

LLI min(LLI a, LLI b) {
    return (a > b ? b : a);
}

int main() {
    // freopen("in", "r", stdin);
 
    LLI a, b, x, y;
    cin >> a >> b >> x >> y;
    LLI g = __gcd(x, y);
    x /= g;
    y /= g;
    LLI m = min(a / x, b / y);
    cout << m << endl;
}