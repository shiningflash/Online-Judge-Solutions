#include <bits/stdc++.h>
using namespace std;

string s = "aabb";

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cout << s[i%4];
	cout << endl;
}