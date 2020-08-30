#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void reverseString(int x) {
	reverse(s.begin(), s.begin() + x);
}

int main() {
	cin >> n;
	getchar();
	getline(cin, s);
	for (int i = 2; i <= n; i++) if (n % i == 0) reverseString(i);
	cout << s << endl;
}