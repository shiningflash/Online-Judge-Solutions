#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lucky[] = {4, 7, 44, 47, 444, 447, 474, 477, 744, 747, 774, 777};

int main() {
    int n, len = sizeof(lucky) / sizeof(lucky[0]);
    cin >> n;
    for (int i = 0; i < len; i++) {
        if (n % lucky[i] == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
