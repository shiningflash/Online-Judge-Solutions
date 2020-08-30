#include <bits//stdc++.h>
using namespace std;
#define LLI long long int
 
const int mx = 2e5;
int a[mx];
 
 
int main() {  
	// freopen("in", "r", stdin);
 
	int n, m, x;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	m = a[n-1];
	stack <int> s;
	s.push(0);
	for (int i = n-2; i >= 0; i--) {
		if (a[i] > m) s.push(0), m = a[i];
		else s.push(m - a[i] + 1);
	}
	while (!s.empty()) cout << s.top() << " ", s.pop();
	
	return 0;
} 