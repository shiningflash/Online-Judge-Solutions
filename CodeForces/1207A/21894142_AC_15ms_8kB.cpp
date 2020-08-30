#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //freopen("in", "r", stdin);
    int n, b, p, f, h, c;
    for (scanf("%d", &n); n--; ) {
        scanf("%d %d %d %d %d", &b, &p, &f, &h, &c);
        b /= 2;
        int sum = 0;
        if (c > h) {
            if (b < f) sum += (b * c);
            else {
                sum += (f * c);
                b -= f;
                sum += (min(b, p) * h);
            }
        }
        else {
            if (b < p) sum += (b * h);
            else {
                sum += (p * h);
                b -= p;
                sum += (min(b, f) * c);
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}