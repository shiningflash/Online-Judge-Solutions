#include <bits//stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 100;
int a[mx][mx], b[mx][mx];
vector < pair <int, int> > v;


int main() {  
	// freopen("in", "r", stdin);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (i > 0 && j > 0 && a[i-1][j-1] == 1 && a[i-1][j] == 1 && a[i][j-1] == 1 && a[i][j] == 1) {
				b[i-1][j-1] = 1;
				b[i-1][j] = 1;
				b[i][j-1] = 1;
				b[i][j] = 1;
				v.push_back(make_pair(i, j));
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) {
				cout << -1 << endl;
				return 0;
			}
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
	
	return 0;
} 