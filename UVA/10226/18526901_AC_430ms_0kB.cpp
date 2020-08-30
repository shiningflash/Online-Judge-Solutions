#include <bits/stdc++.h>
using namespace std;

map <string, int> tree;
map <string, int> :: iterator it = tree.begin();
string s;

int main() {
//	freopen("in", "r", stdin);
	int a, b, n, t;
	for (scanf("%d\n\n", &t); t--; ) {
		int sum = 0;
		while (getline(cin, s) && s.length()) {
			tree[s]++;
			sum++;
		}
		for (it = tree.begin(); it != tree.end(); it++) {
			double xx = (it->second) * 100.00 / sum;
			cout << it->first << " ";
			printf("%.4lf\n", xx);
		}
		if(t) puts("");
		tree.clear();
	}
	return 0;
}
