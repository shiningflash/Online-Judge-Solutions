#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

int main() {  
	// freopen("in", "r", stdin);

	char ch;
	bool ok = 1;
	while ((ch = getchar()) != EOF) {
		if (ch == '"') {
			if (ok) cout << "``";
			else cout << "''";
			ok = !ok;
		}
		else cout << ch;
	}
    return 0;
} 