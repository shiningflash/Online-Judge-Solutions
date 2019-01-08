#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int k = n - a;
    cout << min(k, b+1) << endl;
    return 0;
}