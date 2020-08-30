#include <bits/stdc++.h>
using namespace std;

int a[200];
char ch[4];

int main() {
    int tst, t = 1, n, m, u, v;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; scanf("%d", &a[i]), i++);

        while (m--) {
            scanf("%s", ch);
            if (ch[0] == 'S') {
                scanf("%d", &v);
                for (int i = 0; i < n; a[i] += v, i++);
            }
            else if (ch[0] == 'M') {
                scanf("%d", &v);
                for (int i = 0; i < n; a[i] *= v, i++);
            }
            else if (ch[0] == 'D') {
                scanf("%d", &v);
                for (int i = 0; i < n; a[i] /= v, i++);
            }
            else if (ch[0] == 'R') {
                for (int i = 0; i < n / 2; swap(a[i], a[n-i-1]), i++);
            }
            else if (ch[0] == 'P') {
                scanf("%d %d", &u, &v);
                swap(a[u], a[v]);
            }
        }

        printf("Case %d:\n", t++);
        for (int i = 0; i < n; i++)
            cout << a[i] << ((i < n - 1) ? " " : "\n");
    }
}