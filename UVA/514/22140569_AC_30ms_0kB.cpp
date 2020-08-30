#include <bits/stdc++.h>
using namespace std;
#define mx 1005

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int a[mx], n;
    while (scanf("%d", &n) && n) {
        while (scanf("%d", &a[0]) && a[0]) {
            stack<int> s;
            for (int i = 1; i < n; i++) scanf("%d", &a[i]);
            int x(0);
            for (int i = 1; i <= n; i++) {
                s.push(i);
                while (s.top() == a[x]) {
                    if (!s.empty()) x++, s.pop();
                    if (s.empty()) break;
                }
            }
            printf("%s\n", (n == x ? "Yes" : "No"));
        }
        puts("");
    }
    return 0;
}
