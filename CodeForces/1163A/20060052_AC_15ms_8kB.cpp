#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m;
    if (m) q = min(m, n-m);
    else q = 1;
    cout << q << endl;
}