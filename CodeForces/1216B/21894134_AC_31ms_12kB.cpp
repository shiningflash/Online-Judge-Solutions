#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
 
int main() {
    //freopen("in", "r", stdin);
    int n, x;
    scanf("%d", &n);
    queue <int> q;
    vector <pii> v(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        v[i] = make_pair(x, i);
    }
    sort(v.rbegin(), v.rend());
    q.push(v[0].second+1);
    long long int total = 1;
    for (int i = 1; i < n; i++) {
        total += (v[i].first * i) + 1;
        q.push(v[i].second+1);
    }
    printf("%lld\n", total);
    if (q.size()) {
        printf("%d", q.front());
        q.pop();
    }
    while (!q.empty()) {
        printf(" %d", q.front());
        q.pop();
    }
    printf("\n");
}