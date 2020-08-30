#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 100;

int main() {  
	// freopen("in", "r", stdin);

	string s;
	getline(cin, s);
	int n = 0, m = 0, len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i] == 'a') n++;
		else m++;
	}
	if (n > m) cout << len << endl;
	else cout << len - (m - n + 1) << endl;
	
	return 0;
} 