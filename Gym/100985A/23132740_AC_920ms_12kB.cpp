#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    LLI t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (__gcd(a, b) > 1) cout << "Sim\n";
        else cout << "Nao\n";
     }
}
