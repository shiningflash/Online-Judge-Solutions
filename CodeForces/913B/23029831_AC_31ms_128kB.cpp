/*
	@author : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e4+5;
vector <int> v[mx];

int main() {
    // freopen("in", "r", stdin);
 
    int n, x, m;
    cin >> n;
    for (int i = 2; i <= n; i++) cin >> x, v[x].push_back(i);
    for (int i = 1; i <= n; i++) {
        if (v[i].empty()) continue;
        int cnt = 0;
        for (int j = 0; j < v[i].size(); j++) {
            if (v[v[i][j]].empty()) cnt++;
        }
        if (cnt < 3) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}