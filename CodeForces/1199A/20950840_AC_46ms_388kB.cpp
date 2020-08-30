#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int a[n+1];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        bool f = false;
        for (int j = i-1; j >= max(0, i-x); j--) {
            if (a[i] >= a[j]) { f = true; break; }
        }
        for (int j = i+1; !f && j <= min(n-1, i+y); j++) {
            if (a[i] >= a[j]) { f = true; break; }
        }
        if (!f) { printf("%d\n", i+1); return 0; }
    }
}