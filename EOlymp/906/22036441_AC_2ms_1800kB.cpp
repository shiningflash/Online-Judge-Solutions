#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;
    while (n) {
        sum *= (n % 10);
        n /= 10;
    }
    cout << sum << endl;
}
