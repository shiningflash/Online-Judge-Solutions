
// kadane algorithm :: TC - O(N)
// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;

int n;

void maxSubArrSum() {
    int cur = 0, mx = 0, r;
    for (int i = 0; i < n; i++) {
        scanf("%d", &r);
        cur += r;
        if (cur > mx) mx = cur;
        if (cur < 0) cur = 0;
    }
    if (mx > 0) printf("The maximum winning streak is %d.\n", mx);
    else printf("Losing streak.\n");
}

int main() {
    while (scanf("%d", &n) && n) {
        maxSubArrSum();
    }
}
