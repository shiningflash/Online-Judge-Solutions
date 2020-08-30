#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 2e5;

int main() {  
	// freopen("in", "r", stdin);

	int cas(0);
	string name;
	while (cin >> name && name != "#") {
		printf("Case %d: ", ++cas);
		if (name == "HELLO") cout << "ENGLISH\n";
		else if (name == "HOLA") cout << "SPANISH\n";
		else if (name == "HALLO") cout << "GERMAN\n";
		else if (name == "BONJOUR") cout << "FRENCH\n";
		else if (name == "CIAO") cout << "ITALIAN\n";
		else if (name == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
		else cout << "UNKNOWN\n";
	}
    return 0;  
} 