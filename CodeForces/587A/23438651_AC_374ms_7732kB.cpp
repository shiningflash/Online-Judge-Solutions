// @author :: Amirul Islam 
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>

const int mx = 2e5+5;
const double pi = acos(-1.0);

int a[mx], b[mx];
 
int main() {
    // freopen("in", "r", stdin);
    
    int n, x, ans = 0;
    priority_queue <int> q;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &x), q.push(-x);
    while (q.size() > 1) {
        int u = q.top();
        q.pop();
        int v = q.top();
        q.pop();
        if (u == v) q.push(u-1);
        else ans++, q.push(v);
    }
    printf("%d\n", ans + 1);
}
