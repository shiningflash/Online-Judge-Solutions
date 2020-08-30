#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, k;
    cin >> n >> k;
    cout << (int) max(2.0, ceil(2*n/k)) << endl;
}