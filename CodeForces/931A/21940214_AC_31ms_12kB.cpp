#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int a, b; cin >> a >> b;
    int mx = max(a, b);
    int mn = min(a, b);
    int x = mx - mn;
    int y = x / 2;
    int z = x - y;
    int sum = (y * (y + 1)) / 2;
    sum += (z * (z + 1)) / 2;
    cout << sum << endl;
}