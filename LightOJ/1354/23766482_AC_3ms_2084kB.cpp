#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

bool check(int a, int b) {
	int x(1), sum(0), y;
	while (a != 0) {
		y = a % 10;
		a /= 10;
		if (y == 1) sum += x;
		x <<= 1;
	}
	return (sum == b);
}

int main() {
    int cas(0), t, a, b, c, d, w, x, y, z;
    char ch;
    for (cin >> t; t--; ) {
        cout << "Case " << ++cas << ": ";
        cin >> a >> ch >> b >> ch >> c >> ch >> d;
        cin >> w >> ch >> x >> ch >> y >> ch >> z;
        if (!check(w, a)) cout << "No" << endl;
        else if (!check(x, b)) cout << "No" << endl;
        else if (!check(y, c)) cout << "No" << endl;
        else if (!check(z, d)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}