// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e3;
const int MOD = 131071;

int main() {
    int rem = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '#') {
            if (rem == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
            rem = 0;
        }
        else if (c != '\n') rem = ((rem * 2) + (c - '0')) % MOD;
    }
    return 0;
}