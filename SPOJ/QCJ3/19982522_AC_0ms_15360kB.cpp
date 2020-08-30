#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        int sum(0);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &m);
            while (m--) sum ^= i;
        }
        printf("%s\n", (sum != 0) ? "Tom Wins" : "Hanks Wins");
    }
}