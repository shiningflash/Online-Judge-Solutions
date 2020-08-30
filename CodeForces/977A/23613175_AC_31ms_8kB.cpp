#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
const int mx = 1e5+5;
 
int main() {
    int n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10 == 0) n /= 10;
        else n--;
    }
    cout << n << "\n";
}