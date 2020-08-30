#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n;
    char c[6];
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %s", &n, c);
        printf("Case %d: ", ++t);
        if (c[0] == 'A') cout << (n % 3 == 1 ? "Bob\n" : "Alice\n");
        else cout << (n % 3 == 0 ? "Alice\n" : "Bob\n");
    }
    return 0;
}