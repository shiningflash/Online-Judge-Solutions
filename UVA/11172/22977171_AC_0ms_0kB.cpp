#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

int main() {  
    LLI t, a, b;
	for (cin >> t; t--; ) {
		cin >> a >> b;
		if (a == b) cout << "=" << endl;
		else if (a > b) cout << ">" << endl;
		else cout << "<" << endl;
	}
    return 0;  
} 