#include <bits/stdc++.h>
using namespace std;

int a[1000005];

int main() {
    int t, n, q, x, b, c;
    map <int, int> m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &q);
        m.clear();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            scanf("%d", &x);
            a[i] = x;
            if (m[x] == 0 && x != 0) sum++;
            m[x]++;
        }
        for (int i = 0; i < q; i++) {
            scanf("%d", &x);
            if (x == 1) {
                scanf("%d %d", &b, &c);
                if (m[c] == 0 && c != 0) sum++;
                m[c]++;
                int val = a[b];
                m[val]--;
                if (m[val] == 0 && val != 0) sum--;
                a[b] = c;
            }
            else printf("%d\n", sum);
        }
    }
    return 0;
}
