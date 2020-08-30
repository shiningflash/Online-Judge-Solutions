#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    int n, a, b;
    for (scanf("%d", &n); n--; ) {
        scanf("%d %d", &a, &b);
        printf("%lld\n", (ll) b << 1);
    }
}