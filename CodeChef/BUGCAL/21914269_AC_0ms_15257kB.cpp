#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	string a, b;
	while(t--) {
		string s = "";
		cin >> a >> b;
		if (a.size() > b.size()) {
			reverse(b.begin(), b.end());
			for(int i = b.size(); i < a.size(); i++) b += "0";
			reverse(b.begin(), b.end());
		}
		else {
			reverse(a.begin(), a.end());
			for(int i = a.size(); i < b.size(); i++) a += "0";
			reverse(a.begin(), a.end());
		}
		for (int i = 0; i < a.size(); i++) {
            x = (a[i] - '0') + (b[i] - '0');
            s += ((x % 10) + '0');
		}
		while(s.size()!=1) {
			if (s[0] == '0') s.erase(0, 1);
			else break;
		}
		cout << s << "\n";
	}
}
