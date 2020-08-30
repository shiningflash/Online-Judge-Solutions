/*
   How Cow LightOJ - 1107 
   Amirul Islam, Mar 12, 2019
*/ 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tst, t = 1, x1, y1, x2, y2, u, v, q;
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("Case %d:\n", t++);
        for (scanf("%d", &q); q--; ) {
            scanf("%d %d", &u, &v);
            cout << (((x1 <= u && u <= x2) && (y1 <= v && v <= y2)) ? "Yes\n" : "No\n");
        }
    }
    return 0;
}