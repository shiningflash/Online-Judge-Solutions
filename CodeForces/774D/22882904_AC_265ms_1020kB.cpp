#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
int a[mx], b[mx];

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i < l; i++) {
        if (a[i] != b[i]) {
        	cout << "LIE\n";
        	return 0;
        }
    }
    for (int i = r+1; i <= n; i++) {
        if (a[i] != b[i]) {
        	cout << "LIE\n";
        	return 0;
        }
    }
    cout << "TRUTH\n";
    return 0;
}
