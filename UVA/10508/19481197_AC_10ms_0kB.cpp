#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    int n, m;
    string s, p, v[10005];
    while (scanf("%d %d", &n, &m) != EOF) {
        cin >> s;
        v[0] = s;
        for (int i = 1; i < n; i++) {
            cin >> p;
            int cng(0);
            for (int j = 0; j < m; j++)
                if (s[j] != p[j]) cng++;
            v[cng] = p;
        }
        for (int i = 0; i < n; cout << v[i++] << "\n");
    }
}