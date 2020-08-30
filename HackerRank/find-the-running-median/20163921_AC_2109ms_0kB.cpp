#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, pos;
    scanf("%d", &n);
    vector <int> v;
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        
        v.insert(upper_bound(v.begin(), v.end(), x), x);
        
        if (i & 1) printf("%.1f\n", v[i/2] / 1.0);
        else printf("%.1f\n", (v[i/2] + v[i/2-1]) / 2.0);
    }
}