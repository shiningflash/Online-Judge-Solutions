#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<int, int>
#define fr first
#define sc second
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, z, ans(0);
	cin >> n >> m >> z;
	int x = m;
	for (int i = 1; x <= z; ) {
		if (x % n == 0) ans++;
		x = m * ++i;
	}
	cout << ans << endl;
    return 0;
}