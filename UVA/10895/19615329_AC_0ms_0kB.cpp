#include <bits/stdc++.h>
using namespace std;

int n, m, k, val, a[10005];
vector <int> v1[10005], v2[10005];

void CLEAR() {
    for (int i = 0; i <= n; v1[i].clear(), v2[i].clear(), i++);
}

int main() {
    while (scanf("%d %d", &m, &n) != EOF) {
        CLEAR();
        for (int i = 1; i <= m; i++) {
            scanf("%d", &k);
            for (int j = 0; j < k; scanf("%d", &a[j]), j++);
            for (int j = 0; j < k; scanf("%d", &val), v1[a[j]].push_back(i), v2[a[j]].push_back(val), j++);
        }
        printf("%d %d\n", n, m);
        for (int i = 1; i <= n; i++) {
            cout << v1[i].size();
            for (int j = 0; j < v1[i].size(); printf(" %d", v1[i][j]), j++);
            printf("\n");
            for (int j = 0; j < v2[i].size(); printf("%d%s", v2[i][j], (j == v2[i].size()-1) ? "" : " "), j++);
            printf("\n");
        }
    }
    return 0;
}