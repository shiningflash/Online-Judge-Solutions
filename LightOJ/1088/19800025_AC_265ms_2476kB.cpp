#include <bits/stdc++.h>
using namespace std;

int a[100005], t(0), tst, n, q, u, v, x, y;

int binary_search(int num, bool flag) {
    int low = 0, high = n-1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] < num) low = mid + 1;
        else if (a[mid] > num) high = mid - 1;
        else return mid;
    }
    return (!flag) ? low : high;
}

int main() {
//    freopen("in", "r", stdin);
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &q);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        printf("Case %d:\n", ++t);
        while (q--) {
            scanf("%d %d", &u, &v);
            x = binary_search(u, 0);
            y = binary_search(v, 1);
            printf("%d\n", y-x+1);
        }
    }
}