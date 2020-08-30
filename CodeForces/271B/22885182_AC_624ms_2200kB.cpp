#include <bits/stdc++.h>
using namespace std;
 
const int mx = 2e5;
const int len = 600;
int a[mx+5], b[len][len];
 
int n, m, ans = INT_MAX, k;
 
void sieve() {
	a[0] = a[1] = 1;
	for (int i = 2; i <= sqrt(mx); i++) {
		if (!a[i]) {
			for (int j = i << 1; j <= mx; j += i) a[j] = 1;
		}
	}
}
 
void part1() {
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			cin >> k;
			int z = 0;
			while (a[k]) k++, z++;
			sum += z;
			b[i][j] = z;
		}
		if (sum < ans) ans = sum;
	}
}
 
void part2() {
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += b[j][i];
		}
		if (sum < ans) ans = sum;
	}
}
 
void print() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << b[i][j] << " ";
		cout << endl;
	}
}
 
int main() {
	sieve();
	cin >> n >> m;
	part1();
	part2();
	// print
	cout << ans << endl;
    return 0;
}