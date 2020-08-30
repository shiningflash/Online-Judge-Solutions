#include <bits/stdc++.h>
using namespace std;
#define mx 10005

int main() {
    int a[mx], n;
    while (scanf("%d", &n) && n) {
        while (scanf("%d", &a[0]) && a[0]) {
            for (int i = 1; i < n; i++) scanf("%d", &a[i]);
            int y(0);
            stack <int> s;
            for (int i = 1; i <= n; i++) {
                s.push(i);
                while (s.top() == a[y]) {
                    if (!s.empty()) s.pop(), y++;
                    if (s.empty()) break;
                }
            }
            if (y == n) printf("Yes\n");
            else printf("No\n");
        }
        printf("\n");
    }
    return 0;
}