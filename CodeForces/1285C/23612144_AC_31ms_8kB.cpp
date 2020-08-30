// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define MP make_pair
#define PB push_back
 
const int le = 1e5+5;
const int INF = INT_MAX;
 
LLI gcd(LLI a, LLI b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
 
LLI lcm(LLI a, LLI b) {  
    return (a*b)/gcd(a, b);  
 }  
 
int main() {
    LLI n, x, a, b;
	cin >> n;
	if (n == 1) {
		cout << 1 << " " << 1 << endl;
		return 0;
	}
	for (LLI i = sqrt(n); i >= 1; i--) {
		if (n % i == 0) {
			x = n / i;
			if (lcm(i, x) == n) {
				cout << i << " " << x << "\n";
				return 0;
			}
		}
	}
}