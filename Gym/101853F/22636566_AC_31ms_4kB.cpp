#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, req, a, b, c, d;
    for (scanf("%d", &t); t--; ) {
        scanf("%d %d", &n, &req);
        int time(0);
        while (n--) scanf("%d:%d %d:%d", &a, &b, &c, &d), time += (c - a - 1) * 60 + d + 60 - b;
        cout << (time >= req*60 ? "YES\n" : "NO\n");
    }
}