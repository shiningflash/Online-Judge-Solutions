// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    priority_queue<int> q;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        q.push(m);
        if (i > n >> 1) q.pop();
    }
    double ans = q.top();
    if (n % 2 == 0) q.pop(), ans = (ans + q.top()) / 2.0;
    printf("%.1lf\n", ans);
}