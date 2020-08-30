#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;
map <int, int> mp;
int a[mx];

void square() {
	for (int i = 0; i <= 1000; i++) mp[i*i] = 1;
}


int main() {  
	// freopen("in", "r", stdin);

	square();
	int n, x, maxn = INT_MIN;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x > maxn) {
			if (mp[x] != 1) maxn = x;
		} 
	}
	cout << maxn << endl;
    return 0;
} 