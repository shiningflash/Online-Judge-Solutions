#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	int n, x;
	while (cin >> s && s != "-") {
		queue <char> q;
		for (int i = 0; i < s.size(); i++) q.push(s[i]);
		for (cin >> n; n--; ) {
			cin >> x;
			for (int i = 0; i < x; i++) {
				char ch = q.front();
				q.pop();
				q.push(ch);
			}
		}
		while (!q.empty()) cout << (char) q.front(), q.pop();
		cout << endl;
	}
}