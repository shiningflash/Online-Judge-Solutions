// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PB push_back
#define FILE(in) freopen("in.txt", "r", stdin)

int main() {
    // FILE();
    // FASTIO();

    int a, b, k1, k2, n;
    cin >> a >> b >> k1 >> k2 >> n;

    int mm = a * (k1 - 1);
    mm += (b * (k2 - 1));
    cout << max((n - mm), 0) << " ";

    if (k1 > k2) {
        int x = min(b, n/k2);
        n -= (x * k2);
        int y = min(a, n/k1);
        cout << (x+y) << endl;
    }
    else {
        int x = min(a, n/k1);
        n -= (x * k1);
        int y = min(b, n/k2);
        cout << (x+y) << endl;
    }
    return 0;
}

