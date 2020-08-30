#include <iostream>
using namespace std;
 
int main() {
	int n, cnt = 0;
	string s;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n-1; i+=2) {
		if (s[i] != s[i+1]) continue;
		else if (s[i] == 'a') s[i] = 'b';
		else s[i] = 'a';
		cnt++;
	}
	cout << cnt << "\n" << s << "\n";
	return 0;
}