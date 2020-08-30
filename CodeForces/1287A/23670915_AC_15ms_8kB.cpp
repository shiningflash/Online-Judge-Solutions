#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, n;
	string s;
	for (cin >> t; t--; ) {
		cin >> n;
		cin >> s;
		int x = 0;
		for (int j = 0; j < n; j++) {
			bool p = 0;
			for (int i = 1; i < n; i++) {
				if (s[i-1] == 'A' && s[i] == 'P') {
					p = 1;
					s[i] = 'A';
					i++;
				}
			}
			if (p) x++;
		}
		cout << x << endl;
	}
}