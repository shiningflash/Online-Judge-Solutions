// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e5+5;
const double pi = acos(-1.0);

PII a[mx], b[mx];
 
int main() {
    // freopen("in", "r", stdin);
    
    int n, x, y, len1 = 0, len2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x < 0) a[len1++] = make_pair(-x, y);
        else b[len2++] = make_pair(x, y);
    }
    sort(a, a+len1);
    sort(b, b+len2);
    int i = 0, mn = min(len1, len2), sum = 0;
    for (; i < mn; i++) sum += a[i].second + b[i].second;
    if (mn < len1) sum += a[mn].second;
    if (mn < len2) sum += b[mn].second;
    cout << sum << endl;
}
