#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int t, n, m;
    for (cin >> t; t--; ) {
        cin >> n >> m;
        int a, b, c, d, hour = 0, minutes = 0;
        while (n--) {
            scanf("%d:%d %d:%d", &a, &b, &c, &d);
            hour += (c - a - 1);
            minutes += (60 - b) + d;
        }
        hour += (minutes / 60);
        cout << (hour >= m ? "YES\n" : "NO\n");
    }
}
