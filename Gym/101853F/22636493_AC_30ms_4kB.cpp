#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, req, a, b, c, d;
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &n, &req);
        int hour(0), minute(0);
        while (n--) scanf("%d:%d %d:%d", &a, &b, &c, &d), hour += (c - a - 1), minute += d + (60-b);
        cout << (hour + (minute / 60) >= req ? "YES\n" : "NO\n");
    }
}