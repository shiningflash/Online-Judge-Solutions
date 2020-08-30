#include <bits/stdc++.h>
using namespace std;

int aa[100];

int main() {
    int n, h, m, sum = 0, a, b, x;
    cin >> n >> h >> m;
    for (int i = 0; i < 100; i++) aa[i] = 101;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> x;
        for (int j = a; j <= b; j++) {
            aa[j] = min(aa[j], x);
        }
    }
//    for (int i = 1; i <= n; i++) cout << aa[i] << endl;
    for (int i = 1; i <= n; i++) {
            if (aa[i] == 101) sum += (h*h);
            else sum += (aa[i]*aa[i]);
        }
    cout << sum << endl;
}