// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back

const int len = 1e5+5;
const int PI = acos (-1.0);

int f(int n) {
    return ((n * (n + 1)) / 2);
}

int main() {
    // freopen("in", "r", stdin);
    int n, co(0), ans(0);
    cin >> n;
    while (co <= n) {
        ans++;
        co += f(ans);
    }
    cout << ans-1 << endl;
}