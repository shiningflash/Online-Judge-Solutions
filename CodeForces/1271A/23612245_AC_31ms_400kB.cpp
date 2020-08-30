#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
const int len = 1e5;
int ar[len+5];
 
int main() {
    // freopen("in.txt", "r", stdin);
 
    LLI a, b, c, d, x, y, n, ans1;
    cin >> a >> b >> c >> d >> x >> y;
    LLI ans = max( (min(a, d) * x) , (min(b, min(c, d)) * y ));
    if (x >= y) {
        n = min(a, d);
        d = d - n;
        ans1 = n * x;
        ans1 += ((min(b, min(c, d)) * y));
    }
    else {
        n = min(b, min(c, d));
        d = d - n;
        ans1 = n * y;
        ans1 += (min(a, d) * x);
    }
    cout << max(ans, ans1) << endl;
    return 0;
}