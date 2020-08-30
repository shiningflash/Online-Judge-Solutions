#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, y;
    for (scanf("%d", &t); t--;) {
        scanf("%d %d %d", &n, &x, &y);
        cout << ((x >= (n + 1) >> 1) && (y >= (n >> 1)) ? "YES\n" : "NO\n");
    }
}