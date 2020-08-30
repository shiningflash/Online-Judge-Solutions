#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main() {
    // freopen("in.txt", "r", stdin);

    int n, x, c = 0;
    for (cin >> n; n--; ) {
        cin >> x;
        if (!(x & 1) && x != 2) {
            continue;
        }
        bool f = false;
        for (int i = 3; i <= sqrt(x) + 1; i += 2) {
            if (x % i == 0) {
                f = true;
                continue;
            }
        }
        if (!f) c++;
    }
    cout << c << endl;

    return 0;
}
