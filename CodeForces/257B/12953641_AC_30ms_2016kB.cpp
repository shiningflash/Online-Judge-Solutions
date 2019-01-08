#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int v = min(n, m);
    cout << n + m - v - 1 << " " << v << endl;
    return 0;
}