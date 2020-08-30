#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    int n;
    string s;
    for (cin >> n; n--; ) {
        cin >> s;
        int sum(0), even(0), zero(0);
        for (char c : s) {
            int x = (int) (c - '0');;
            sum += x;
            if (x == 0) {
                if (zero) even = 1;
                else zero = 1;
            }
            else if (x % 2 == 0) even = 1;
        }
        if (even && zero && sum % 3 == 0) cout << "red" << "\n";
        else cout << "cyan" << "\n";
    }
    return 0;
}