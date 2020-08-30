// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5;

int a[mx], n, m, sum;
string ans;

void rec(int tmp, int pos, string str) {
    if (tmp > n) return;
    if (pos > m) return;

    if (tmp != 0) {
        str += to_string(a[pos]);
        str += " ";
    }
    if (tmp <= n && tmp > sum) {
        sum = tmp;
        ans = str;
    }

    for (int i = pos+1; i < m; i++) {
        rec(tmp+a[i], i, str);
    }
    return;
}

int main() {
    // freopen("in", "r", stdin);
    while (scanf("%d %d", &n, &m) != EOF) {
        sum = 0;
        for (int i = 0; i < m; scanf("%d", &a[i]), i++);
        rec(0, -1, "");
        cout << ans << "sum:" << sum << "\n";
    }
    return 0;
}